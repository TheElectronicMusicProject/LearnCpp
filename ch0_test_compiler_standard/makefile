#-------------------------------#
#           Makefile            #
#-------------------------------#
#
#   cmd command is: make -f makefile
#
CC=g++
CCFLAGS=-g -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror -ggdb
OBJ= main.o

#-02 -DNDEBUG are for release version

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f main