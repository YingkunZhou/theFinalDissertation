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

[Getting Started with RISC-V](http://riscv.org.s3-website-us-west-1.amazonaws.com/getting-started.html)

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


