GPP = g++ -std=c++17

all: main.o HeartRates.o
	$(GPP) main.o HeartRates.o  -o MAIN

HeartRates.o: HeartRates.cpp HeartRates.hpp
	$(GPP) -c HeartRates.cpp

main.o: main.cpp HeartRates.hpp
	$(GPP) -c main.cpp HeartRates.cpp

clean: 
	rm *.o
	rm MAIN
