# verilog reading note

## J. Bhasker - A Verilog HDL Primer (1998, Star Galaxy Publisher)
### verilog
The language not only defines the syntax but also defines very clearsimulation semantics for each language construct. Therefore, models written inthis language can be verified using a Verilog simulator.

### history
- 1983 The Verilog HDL language was first developed by Gateway Design Automation as a hardware modeling language for their simulator product
- 1990 In an effort to increase the popularity of the language, the language was placed in the public domain in 1990. And Open Verilog International(OVI) was formed to promote Verilog.
- 1992 OVI decided to pursue standardization of Verilog HDL as an IEEE standard.
- 1995 The effort was successful and the language became an IEEE standard and was updated in 2001 and 2005

**Notice that the standard of the book is 1995**

### capabilities
- A design can be modeled in three different styles or in a mixedstyle. These styles are: behavioral style - modeled using procedural constructs; dataflow style - modeled using continuous assignments; and structural style - modeled using gate and moduleinstantiations.
- There are two data types in Verilog HDL; the net data type andthe register data type. The net type represents a physical connection between structural elements while a register type representsan abstract data storage element.
- **Q**--The capabilities of the Verilog HDL language can be further extended by using the programming language interface (PLI) mechanism. PLI is a collection of routines that allow foreign functions to access information within a Verilog module and allows for designer interaction with the simulator.
- A design can be described in a wide range of levels, ranging fromswitch-level, gate-level, register-transfer-level (RTL) toalgorithmic-level, including process and queuing-level.
- support mixed level modeling
- High-level programming language constructs such as conditionals, case statements, and loops are available in the language.
- sometimes non-deterministic

### Tutorial
- dataflow behavior of a design is described usingcontinuous assignments
- sequential behavior is described using proceduralconstructs.
- the statements are concurrent

`timescale 1ns / 100ps which says that one time unit is to be treated as 1ns and tht the time precision is to be 100ps (the time precision says that all delays must be rounded to 0.1ns)

#### Describing in Dataflow Style
assign [ delay ] LHS_net = RHS_expression;

The basic mechanism used to model a design in the dataflow style is thecontinuous assignment. In a continuous assignment, a value is assigned to a net.

**Notice that the continuous assignments model dataflow behavior of thecircuit; the structure is implicit, not explicit. In addition, continuousassignments execute concurrently, that is, they are order-independent.**
