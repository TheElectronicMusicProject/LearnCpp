#-------------------------------#
#           Makefile            #
#-------------------------------#
#
#   cmd command is: make -f makefile
#
CC=g++
CCFLAGS=-g -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror -ggdb
OBJ= main.o add.o

#-02 -DNDEBUG are for release version

all: main

main: $(OBJ)
	$(CC) $(CCFLAGS) -o main $(OBJ)

main.o: main.cpp
	$(CC) $(CCFLAGS) -c main.cpp

add.o: add.cpp
	$(CC) $(CCFLAGS) -c add.cpp

clean:
	rm -f main