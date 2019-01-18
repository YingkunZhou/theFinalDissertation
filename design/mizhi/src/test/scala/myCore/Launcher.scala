package myCore

import chisel3._
import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val args = Array("--display-base", "16")
  val tests = Map(
    "Decoder" -> { manager: TesterOptionsManager =>
      Driver.execute(() => new OneHotDecoder(5), manager) {
        c => new DecoderTest(c)
      }
    },
    "Encoder" -> { manager: TesterOptionsManager =>
      Driver.execute(() => new OneHotEncoder(16), manager) {
        c => new EncoderTest(c)
      }
    }
  )

  def main(args: Array[String]): Unit = {
    TutorialRunner("myCore", tests, args)
  }
}
