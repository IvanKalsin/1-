KEYS =
prog.exe: CRat.h CRat.o main.o
	g++ -o prog.exe CRat.o main.o
CRat.o: CRat.cpp CRat.h Makefile
	g++ -c CRat.cpp ${KEYS}
main.o: main.cpp CRat.h Makefile
	g++ -c main.cpp ${KEYS}
