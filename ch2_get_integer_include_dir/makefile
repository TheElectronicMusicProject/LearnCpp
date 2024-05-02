#-------------------------------#
#           Makefile            #
#-------------------------------#
#
#   cmd command is: make -f makefile
#
CC=g++
CCFLAGS=-g -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror -ggdb -I./get_int
OBJ= main.o get_int.o

#-02 -DNDEBUG are for release version

all: main

main: $(OBJ)
	$(CC) $(CCFLAGS) -o main $(OBJ)

main.o: main.cpp
	$(CC) $(CCFLAGS) -c main.cpp ./get_int/get_int.cpp

clean:
	rm -f main
