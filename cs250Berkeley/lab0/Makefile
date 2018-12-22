
problems_dir = src/main/scala/problems
test_dir = src/test/scala/problems

problems = Fib.scala Accumulator.scala Adder.scala Counter.scala DynamicMemorySearch.scala LFSR16.scala Memo.scala Mul.scala Mux4.scala \
           RealGCD.scala SingleEvenFilter.scala VecShiftRegister.scala VecShiftRegisterParam.scala VecShiftRegisterSimple.scala VendingMachine.scala \
					 VendingMachineSwitch.scala

test_problems = FibTest.scala Max2.scala MaxN.scala


all: submission $(addprefix submission/, $(problems)) $(addprefix submission/, $(test_problems)) submission/README

submission:
	mkdir submission

submission/FibTest.scala: $(test_dir)/FibTest.scala submission
	cp $< submission

submission/Max2.scala: $(test_dir)/Max2.scala submission
	cp $< submission

submission/MaxN.scala: $(test_dir)/MaxN.scala submission
	cp $< submission

submission/%.scala: src/main/scala/problems/%.scala submission
	cp $< submission

submission/README: README
	cp $< submission
