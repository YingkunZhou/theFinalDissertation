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

#### Describing in Behavioral Style
The behavior of a design is described using procedural constructs. These are:

- Initial statement: This statement executes only once.
- Always statement: This statement always executes in a loop, thatis, the statement is executed repeatedly.

**Only a register data type can be assigned a value in either of these statements.Such a data type retains its value until a new value is assigned. All initialstatements and always statements begin execution at time 0 concurrently.**

use the following code to explain
```
module FA_Seq {A, B, Cin, Sum, Cout)input A, B, Cin;
	output Sum, Cout;
	reg Sum, Cout;
	reg Tl, T2, T3;
	always@ (A or B or Cin) begin
		Sum = (A ^ B) ^ Cin;
		Tl = A & Cin;
		T2 = B & Cin;
		T3 = A & B;
		Cout = (Tl | T2) | T3;
	end
endmodule
```
explain:
The module FA_Seq has three inputs and two outputs. Sum, Cout, Tl, T2 and T3 are declared to be of type reg (reg is one of the register data types) because these are assigned values within the always statement. The always statement has a sequential block (begin-end pair) associated with an event control (the expression following the @ character). This means that whenever an event occurs on A, B or Cin, the sequential block is executed. Statements within a sequential block execute sequentially and the execution suspends after the last statement in the sequential block has executed. After the sequential block completes execution, the always statement again waits for an event to occuron A, B, or Cin.

**The statements that appear within the sequential block are examples of blocking procedural assignments. A blocking procedural assignment completes execution before the next statement executes. A procedural assignment may optionally have a delay.**

Delays can be specified in two different forms:
- Inter-statement delay: This is the delay by which a statement's execution is delayed.
```
Sum = (A ^ B) ^ Cin;
#4 Tl = A & Cin;
```
- Intra-statement delay: This is the delay between computing the value of the right-hand side expression and its assignment to theleft-hand side.
```
Sum = #3 (A ^ B) ^ Cin;
```

Here is a vivid example of initial statement and the behavior of **simulation**
```
timescale Ins / Ins
module Test {Pop, Pid);
	output Pop, Pid;
	reg Pop, Pid;
	initial begin
		Pop = 0; // Stmt 1
		Pid = 0; // stmt 2
		Pop = #5 1;
		Pid = #3 1;
		Pop =#6 0;
		Pid= #2 0;
	end
endmodule
```
![initial statement wave graph](pic/Selection_041.png)
