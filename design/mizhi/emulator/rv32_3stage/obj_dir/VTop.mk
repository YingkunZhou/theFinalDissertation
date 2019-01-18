# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTop.mk

default: /home/albert/CPU/theFinalDissertation/design/mizhi/emulator/rv32_3stage/emulator

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTop
# Module prefix (from --prefix)
VM_MODPREFIX = VTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O1 -std=c++11  -g -I/home/albert/CPU/theFinalDissertation/design/mizhi/emulator/common -I/usr/local/include -I/home/albert/CPU/theFinalDissertation/design/mizhi/riscv-fesvr/fesvr  -L/usr/local/lib -Wl,-rpath,/usr/local/lib -L. -lpthread -DVERILATOR -include /home/albert/CPU/theFinalDissertation/design/mizhi/emulator/common/verilator.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/usr/local/lib -Wl,-rpath,/usr/local/lib -L. -lpthread \
	/home/albert/CPU/theFinalDissertation/design/mizhi/riscv-fesvr/build/libfesvr.so \
	/home/albert/CPU/theFinalDissertation/design/mizhi/emulator/rv32_3stage/SimDTM.o \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	emulator \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/albert/CPU/theFinalDissertation/design/mizhi/emulator/common \


### Default rules...
# Include list of all generated classes
include VTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

emulator.o: /home/albert/CPU/theFinalDissertation/design/mizhi/emulator/common/emulator.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/albert/CPU/theFinalDissertation/design/mizhi/emulator/rv32_3stage/emulator: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
