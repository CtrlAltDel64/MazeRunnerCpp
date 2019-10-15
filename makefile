CFLAGS=-I.

main: main.cpp management.cpp pathfinder.cpp
	g++ -o main main.cpp management.cpp pathfinder.cpp

