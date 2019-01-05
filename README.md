# theFinalDissertation

## Dec 15 Watch videos
[RISC-V "Rocket Chip" SoC Generator in Chisel - 1st RISC-V Workshop](https://www.youtube.com/watch?v=Ir3h3qWcNlg)

[Chisel Quick Tutorial - 1st RISC-V Bootcamp](https://www.youtube.com/watch?v=pfM1WUWbfBs&t=19s)

[risc v berkeley hardware for your berkeley software](https://www.youtube.com/watch?v=SR6m5gcayZs)

[Wed1345 - BOOM An Open Source RISC-V Processor, Chris Celio UC Berkeley](https://www.youtube.com/watch?v=JuJDPbzWpR0)

[Working with Rocket Chip, Adding Extensions, ASIC and FPGA Infrastructure - 1st RISC-V Workshop](https://www.youtube.com/watch?v=64nsYJJqNvI)

[Structure of the RISC-V Software Stack - 1st RISC-V Workshop](https://www.youtube.com/watch?v=2T3eRndwcr0)

[Porting New Code to RISC-V with OpenEmbedded - 1st RISC-V Bootcamp](https://www.youtube.com/watch?v=0xfDcckQfGM)

[LowRISC SoC - 1st RISC-V Workshop](https://www.youtube.com/watch?v=r1i9SAOdyS4)

[An update on lowRISC - 2nd RISC-V Workshop](https://www.youtube.com/watch?v=j94n8yAvq5U)

### 1st RISC-V Workshop Proceedings
[Introductions and Welcome](https://www.youtube.com/watch?v=A5kpo_ff98M&feature=youtu.be)

[RISC-V Projects in India](https://www.youtube.com/watch?v=OoxOzvf78uQ&feature=youtu.be)

[LowRISC SoC](https://www.youtube.com/watch?v=r1i9SAOdyS4&feature=youtu.be)

[RISC-V at BlueSpec](https://www.youtube.com/watch?v=6G0xsL1lmrg&feature=youtu.be)

[RISC-V Software Toolchain](https://www.youtube.com/watch?v=XSyH9T-Cj4w&feature=youtu.be)

[RISC-V “Rocket Chip” SoC Generator in Chisel](https://www.youtube.com/watch?v=Ir3h3qWcNlg&feature=youtu.be)

[Poster and Demo Previews](https://www.youtube.com/watch?v=yM1SQPpXPXQ&feature=youtu.be)

[Structure of the RISC-V Software Stack](https://www.youtube.com/watch?v=2T3eRndwcr0&feature=youtu.be)

[Debugging on RISC-V](https://www.youtube.com/watch?v=sIfG4C936rA&feature=youtu.be)

[Porting New Code to RISC-V with OpenEmbedded](https://www.youtube.com/watch?v=0xfDcckQfGM&feature=youtu.be)

[RISC-V Testing Environments](https://www.youtube.com/watch?v=mbyb7BgYyXg&feature=youtu.be)

[Chisel Quick Tutorial](https://www.youtube.com/watch?v=pfM1WUWbfBs&feature=youtu.be)

[Working with Rocket Chip, Adding Extensions, ASIC and FPGA Infrastructure](https://www.youtube.com/watch?v=64nsYJJqNvI&feature=youtu.be)

## Dec 15 useful links
[bsdcan](http://www.bsdcan.org/2019/)

[risc-v proceedings](https://riscv.org/category/workshops/proceedings/)

[risc-v-tutorial-hpca](https://riscv.org/2015/02/risc-v-tutorial-hpca-2015/)

[risc-v mail list](https://riscv.org/mailing-lists/)

[risc-v stackoverflow](https://stackoverflow.com/questions/tagged/riscv)

## Dec 16 get start risc-v

Rocket Chip is an open-source Sysem-on-Chip design generator that emits synthesizable RTL. It leverages the Chisel hardware construction language to compose a library of sophisticated generators for cores, caches, and interconnects into an integrated SoC. Rocket Chip generates general-purpose processor cores that use the open RISC-V ISA, and provides both an in-order core generator (Rocket) and an out-of-order core generator (BOOM). For SoC designers interested in utilizing heterogeneous specialization for added efficiency gains, Rocket Chip supports the integration of custom accelerators in the form of instruction set extensions, coprocessors, or fully independent novel cores. Rocket Chip has been taped out (manufactured) eleven times, and yielded functional silicon prototypes capable of booting Linux.

[Getting Started with RISC-V](http://riscv.org.s3-website-us-west-1.amazonaws.com/getting-started.html)

[another getting started](https://www.semiwiki.com/forum/content/7225-getting-started-risc-v.html)

[lowRISC](https://www.lowrisc.org/docs/tagged-memory-v0.1/setup/)
[get started chisel](https://chisel.eecs.berkeley.edu/)

[BOOM core document](https://docs.boom-core.org/en/latest/)

[BOOM home website](https://boom-core.org/index)

[chisel vedio youtube](https://www.youtube.com/channel/UCfangLtLIhrEwDU-xH4VkLg/videos)

[Generating and testing of a RISC-V core - Week 1 of GSoC 2016](http://eliaskousk.teamdac.com/entry/generating-and-testing-of-a-risc-v-core-week-1-of-gsoc-2016)

[Google Summer of Code](https://summerofcode.withgoogle.com/archive/)

[cs250 spring 2017](https://inst.eecs.berkeley.edu/~cs250/sp17/)

[cs250 spring 2016](http://www-inst.eecs.berkeley.edu/~cs250/sp16/)

[cs250 chisel](https://github.com/ucberkeley-cs250/chisel)

[cs252 spring 2018](http://www-inst.eecs.berkeley.edu/~cs152/sp18/)

[cs252 spring 2017](https://inst.eecs.berkeley.edu/~cs252/sp17/)
### Install QEMU, a fast ISA Simulator for risc-v

#### downlown qemu source
```
git clone https://github.com/ucb-bar/riscv-qemu.git
```
#### prepare environmnent library
```
sudo apt-get install libpixman-1-dev
sudo apt-get install libglib2.0-dev
```
#### config
```
./configure --target-list=riscv64-softmmu,riscv32-softmmu,riscv64-linux-user,riscv32-linux-user
```
#### make
```
make
```

## Dec 22
### get familiar with sbt
[sbt tutorial](https://www.scala-sbt.org/1.x/docs/sbt-by-example.html)
[Essential SBT (build tool for Scala)](https://www.scalawilliam.com/essential-sbt/)
### some useful wiki about chisel
[Chisel tutorial](https://github.com/ucb-bar/chisel-tutorial/wiki)
[Users guide to chisel](https://github.com/freechipsproject/chisel3/wiki)
### summarize about chisel
The standard Chisel3 compilation pipeline looks like:
- Chisel3 (Scala) to Firrtl (this is your "Chisel RTL").
- Firrtl to Verilog (which can then be passed into FPGA or ASIC tools).
- Verilog to C++ for simulation and testing using Verilator.

### Compiling and Testing Chisel
In the Chisel repository directory, run:
```
sbt compile
```
to compile the Chisel library. If the compilation succeeded, you can then run the included unit tests by invoking:
```
sbt test
```

### today TODO list
- get familiar with the concept of SNAPSHOT
- be able to build a Chisel repository directory

## Dec 24
### how to write md file diligently
makedown file [format](https://help.github.com/articles/basic-writing-and-formatting-syntax/)
[Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#images)

## Dec 25
### read [risc-v elf abi doc](https://github.com/riscv/riscv-elf-psabi-doc/blob/master/riscv-elf.md)
### for floating-point arithmetic please refer ANSI/IEEE Std 754-2008, IEEE standard for floating-point arithmetic, 2008