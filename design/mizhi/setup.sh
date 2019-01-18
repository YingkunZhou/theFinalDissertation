#!/bin/bash
sbt 'runMain rv32_5stage.Top -td emulator/rv32_5stage/generated-src'
sbt 'runMain rv32_3stage.Top -td emulator/rv32_3stage/generated-src'
