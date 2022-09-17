all: hospitalCharges.out

run: hospitalCharges.out
	./hospitalCharges.out

hospitalCharges: hospitalCharges.o calcTotalCharges.o validateUserInput.o
	g++ hospitalCharges.o calcTotalCharges.o validateUserInput.o -o hospitalCharges

hospitalCharges.o: hospitalCharges.cpp
	g++ -c hospitalCharges.cpp

calcTotalCharges.o: calcTotalCharges.cpp
	g++ -c calcTotalCharges.cpp

validateUserInput.o: validateUserInput.cpp
	g++ -c validateUserInput.cpp

clean:
	rm *.o hospitalCharges.out