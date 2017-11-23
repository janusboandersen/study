build/output: build/main.o
	g++ -Wall -std=c++11 build/main.o -o build/output

build/main.o: src/main.cpp
	g++ -c -Wall -std=c++11 src/main.cpp -o build/main.o

clean:
	rm build/*.o
