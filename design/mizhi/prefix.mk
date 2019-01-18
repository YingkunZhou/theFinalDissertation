# Declaration of common variables

RISCV           := /usr/local
srcDir          := /home/albert/CPU/theFinalDissertation/design/mizhi
installTop      := $(DESTDIR)$(RISCV)
buildIncludeDir := $(RISCV)/include
buildLibDir     := $(RISCV)/lib
buildDir        := /home/albert/CPU/riscv-sodor

# Paths to different source trees
chiseldir       := 

CXX := g++
SBT := java -Xmx4096M -Xss8M -XX:MaxPermSize=128M -jar $(srcDir)/sbt/sbt-launch.jar $(SBT_FLAGS)

