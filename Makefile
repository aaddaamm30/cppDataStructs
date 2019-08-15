#########################
#
#   makefile for practicing
#
#########################

CC=g++
CXXFLAGS=-g -c -Wall
EXEC=LL

#source defs
SOURCES=linkedDef.o

#all command
all: $(SOURCES) $(EXEC)

$(EXEC): $(SOURCES)
	$(CC) -o $(EXEC) linkedList.cpp $(SOURCES) 

linkedDef.o: linkedDef.cpp linkedDef.h
	$(CC) $(CXXFLAGS) linkedDef.cpp

#clean command 
clean:
	rm *.o
	rm LL
