import complete.DefaultParsers._
import scala.sys.process._

def scalacOptionsVersion(scalaVersion: String): Seq[String] = {
  Seq() ++ {
    // If we're building with Scala > 2.11, enable the compile option
    //  switch to support our anonymous Bundle definitions:
    //  https://github.com/scala/bug/issues/10047
    CrossVersion.partialVersion(scalaVersion) match {
      case Some((2, scalaMajor: Long)) if scalaMajor < 12 => Seq()
      case _ => Seq("-Xsource:2.11")
    }
  }
}

def javacOptionsVersion(scalaVersion: String): Seq[String] = {
  Seq() ++ {
    // Scala 2.12 requires Java 8. We continue to generate
    //  Java 7 compatible code for Scala 2.11
    //  for compatibility with old clients.
    CrossVersion.partialVersion(scalaVersion) match {
      case Some((2, scalaMajor: Long)) if scalaMajor < 12 =>
        Seq("-source", "1.7", "-target", "1.7")
      case _ =>
        Seq("-source", "1.8", "-target", "1.8")
    }
  }
}

organization := "cn.ac.ucas"

version := "0.1"

name := "mizhi"

scalaVersion := "2.11.12"

crossScalaVersions := Seq("2.11.12", "2.12.6")

scalacOptions ++= Seq("-deprecation", "-feature", "-unchecked", "-language:reflectiveCalls")

// Provide a managed dependency on X if -DXVersion="" is supplied on the command line.
// The following are the current "release" versions.
val defaultVersions = Map(
  "chisel3" -> "latest.release",
  "chisel-iotesters" -> "1.2.+"
)

libraryDependencies ++= Seq(
  "com.github.scopt" %% "scopt" % "3.7.0"
)

libraryDependencies ++= Seq("chisel3","chisel-iotesters").map {
  dep: String => "edu.berkeley.cs" %% dep % sys.props.getOrElse(dep + "Version", defaultVersions(dep)) }

resolvers ++= Seq(
  Resolver.sonatypeRepo("snapshots"),
  Resolver.sonatypeRepo("releases")
)

// Recommendations from http://www.scalatest.org/user_guide/using_scalatest_with_sbt
logBuffered in Test := false

// Disable parallel execution when running tests.
//  Running tests in parallel on Jenkins currently fails.
parallelExecution in Test := false

scalacOptions ++= scalacOptionsVersion(scalaVersion.value)

javacOptions ++= javacOptionsVersion(scalaVersion.value)

trapExit := false


//lazy val elaborateTask = InputKey[Unit]("elaborate", "convert chisel components into backend source code")
//lazy val makeTask = InputKey[Unit]("make", "trigger backend-specific makefile command")
//
//def runChisel(args: Seq[String], cp: Classpath, pr: ResolvedProject) = {
//  val numArgs = 1
//  require(args.length >= numArgs, "syntax: elaborate <component> [chisel args]")
//  val projectName = pr.id
//  //   val packageName = projectName //TODO: valid convention?
//  val packageName = "Sodor" //TODO: celio change
//  val componentName = args(0)
//  val classLoader = new java.net.URLClassLoader(cp.map(_.data.toURI.toURL).toArray, cp.getClass.getClassLoader)
//  val chiselMainClass = classLoader.loadClass("Chisel.chiselMain$")
//  val chiselMainObject = chiselMainClass.getDeclaredFields.head.get(null)
//  val chiselMain = chiselMainClass.getMethod("run", classOf[Array[String]], classOf[Function0[_]])
//  val chiselArgs = args.drop(numArgs)
//  val component = classLoader.loadClass(packageName+"."+componentName)
//  val generator = () => component.newInstance()
//  chiselMain.invoke(chiselMainObject, Array(chiselArgs.toArray, generator):_*)
//}
//
//val chipSettings = Seq(
//  elaborateTask := {
//    val args: Seq[String] = spaceDelimited("<arg>").parsed
//    runChisel(args, (fullClasspath in Runtime).value, thisProject.value)
//  },
//  makeTask := {
//    val args: Seq[String] = spaceDelimited("<arg>").parsed
//    require(args.length >= 2, "syntax: <dir> <target>")
//    runChisel(args.drop(2), (fullClasspath in Runtime).value, thisProject.value)
//    val makeDir = args(0)
//    val target = args(1)
//    val jobs = java.lang.Runtime.getRuntime.availableProcessors
//    val make = "make -C" + makeDir + " -j" + jobs + " " + target
//    make!
//  }
//)