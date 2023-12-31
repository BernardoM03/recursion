CC=g++
EXE=asn5

$(EXE)recurse: recurse.o stairs.o stairs.h
	$(CC) recurse.o stairs.o -o $(EXE)

recurse.o: recurse.cpp
	$(CC) -c recurse.cpp

stairs.o: stairs.cpp
	$(CC) -c stairs.cpp
