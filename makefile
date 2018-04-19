main: COW.o main.o
	g++ -o COW main.o COW.o

COW.o: COW.cpp COW.h
	g++ -c COW.cpp

main.o: main.cpp COW.h
	g++ -c main.cpp


clean:
	rm COW *.o

