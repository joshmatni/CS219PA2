operating: driver.o operations.o
	g++ -o operating driver.o operations.o

driver.o: driver.cpp command.h operations.h
	g++ -std=c++11 -c driver.cpp

operations.o: operations.cpp operations.h resultWithFlags.h
	g++ -c operations.cpp

clean:
	rm *.o operating