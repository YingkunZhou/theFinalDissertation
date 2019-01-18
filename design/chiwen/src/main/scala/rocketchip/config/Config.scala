package rocketchip.config

abstract class Field[T] private (val default: Option[T])
{
  def this() = this(None)
  def this(default: T) = this(Some(default))
}

abstract class View {
  protected[config] def find[T](pname: Field[T], site: View): Option[T] // no body now, which means no function

  final def apply[T](pname: Field[T]): T = apply(pname, this)
  final def apply[T](pname: Field[T], site: View): T = {
    val out = find(pname, site)
    require(out.isDefined, s"Key $pname is not defined in Parameters")
    out.get
  }

  final def lift[T](pname: Field[T]): Option[T] = lift(pname, this)
  final def lift[T](pname: Field[T], site: View): Option[T] = find(pname, site).map(_.asInstanceOf)
}

private class ChainView(head: Parameters, tail: View) extends View {
  def find[T](pname: Field[T], site: View): Option[T] = head.chain(site, tail, pname)
}

private class ChainParameters(x: Parameters, y: Parameters) extends Parameters {
  def chain[T](site: View, tail: View, pname: Field[T]): Option[T] = x.chain(site, new ChainView(y, tail), pname)
}

private class TerminalView extends View {
  def find[T](pname: Field[T], site: View): Option[T] = pname.default
}


private class MapParameters(map: Map[Any, Any]) extends Parameters {
  protected[config] def chain[T](site: View, tail: View, pname: Field[T]): Option[T] = {
    val g = map.get(pname)
    if (g.isDefined) Some(g.get.asInstanceOf[T]) else tail.find(pname, site)
  }
}

abstract class Parameters extends View {
  protected[config] def chain[T](site: View, tail: View, pname: Field[T]): Option[T]
  protected[config] def find[T](pname: Field[T], site: View): Option[T] = chain(site, new TerminalView, pname)

  final def ++ (x: Parameters): Parameters =
    new ChainParameters(this, x)

  final def alter(f: (View, View, View) => PartialFunction[Any,Any]): Parameters =
    Parameters(f) ++ this

  final def alterPartial(f: PartialFunction[Any,Any]): Parameters =
    Parameters((_,_,_) => f) ++ this

  final def alterMap(m: Map[Any,Any]): Parameters =
    new MapParameters(m) ++ this

}

private class EmptyParameters extends Parameters {
  def chain[T](site: View, tail: View, pname: Field[T]): Option[T] = tail.find(pname, site)
}

private class PartialParameters(f: (View, View, View) => PartialFunction[Any,Any]) extends Parameters {
  protected[config] def chain[T](site: View, tail: View, pname: Field[T]): Option[T] = {
    val g = f(site, this, tail)
    if (g.isDefinedAt(pname)) Some(g.apply(pname).asInstanceOf[T]) else tail.find(pname, site)
  }
}

object Parameters {
  def empty: Parameters = new EmptyParameters
  def apply(f: (View, View, View) => PartialFunction[Any,Any]): Parameters = new PartialParameters(f)
}

class Config(p: Parameters) extends Parameters {
  def this(f: (View, View, View) => PartialFunction[Any,Any]) = this(Parameters(f))

  protected[config] def chain[T](site: View, tail: View, pname: Field[T]): Option[T] = p.chain(site, tail, pname)
  override def toString: String = this.getClass.getSimpleName
  def toInstance: Config = this
}

// Internal implementation:
