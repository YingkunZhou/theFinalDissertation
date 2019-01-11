// See LICENSE.txt for license details.
package core

import chisel3._
import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val args = Array("--display-base", "16")
  val tests = Map(
    "Decoder" -> { (manager: TesterOptionsManager) =>
      Driver.execute(() => new OneHotDecoder(5), manager) {
        (c) => new DecoderTest(c)
      }
    }
  )

  def main(args: Array[String]): Unit = {
    TutorialRunner("problems", tests, args)
  }
}
