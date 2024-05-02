#-------------------------------#
#           Makefile            #
#-------------------------------#
#
#   cmd command is: make -f makefile
#
CC=g++
CCFLAGS=-g -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror -ggdb -I./io
OBJ= main.o io.o

#-02 -DNDEBUG are for release version

all: main

main: $(OBJ)
	$(CC) $(CCFLAGS) -o main $(OBJ)

main.o: main.cpp
	$(CC) $(CCFLAGS) -c main.cpp ./io/io.cpp

clean:
	rm -f main
