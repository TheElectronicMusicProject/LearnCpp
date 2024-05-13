#-------------------------------#
#           Makefile            #
#-------------------------------#
#
#   cmd command is: make -f makefile
#
CC=g++
CCFLAGS=-g -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -Werror -ggdb
OBJ= main.o math.o

#-02 -DNDEBUG are for release version

all: main

main: $(OBJ)
	$(CC) $(CCFLAGS) -o main $(OBJ)

main.o: main.cpp
	$(CC) $(CCFLAGS) -c main.cpp math.cpp

clean:
	rm -f main