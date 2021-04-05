all: main.o HeartRates.o
	g++ main.o HeartRates.o  -o MAIN

HeartRates.o: HeartRates.cpp HeartRates.hpp
	g++ -c HeartRates.cpp

main.o: main.cpp HeartRates.hpp
	g++ -c main.cpp HeartRates.cpp

clean: 
	rm *.o
	rm MAIN
