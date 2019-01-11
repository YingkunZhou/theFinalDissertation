// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VOneHotDecoder__Syms_H_
#define _VOneHotDecoder__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VOneHotDecoder.h"

// SYMS CLASS
class VOneHotDecoder__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VOneHotDecoder*                TOPp;
    
    // CREATORS
    VOneHotDecoder__Syms(VOneHotDecoder* topp, const char* namep);
    ~VOneHotDecoder__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
