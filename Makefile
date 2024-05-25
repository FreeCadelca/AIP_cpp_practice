code.o: code.cpp
	g++ -c -o code.o code.cpp
BESTfunction.o: BESTfunction.cpp
	g++ -c -o BESTfunction.o BESTfunction.cpp
compilled_program: code.o BESTfunction.o
	g++ -o compilled_program code.o BESTfunction.o