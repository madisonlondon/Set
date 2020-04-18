# makefile
# use to compile and test the assembler ASM for the STACK computer and
# its various components

DEBUG_FLAG= -DDEBUG -g -Wall
CFLAGS=-DDEBUG -g -Wall

.SUFFIXES: .cpp .o

.cpp.o:
	g++ $(CFLAGS) -c $<


setTester: Set.o SetTester.o 
	g++ -o setTester Set.o SetTester.o

Set.o: Set.h Node.h  

clean:
	/bin/rm -f setTester *.o core


