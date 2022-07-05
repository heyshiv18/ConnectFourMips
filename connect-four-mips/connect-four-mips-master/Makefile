# Created by Shivendra Mall

CC=gcc

CFLAGS = -c -Wall -Wextra -std=c99 -O1

# All of the .h header files to use as dependencies
HEADERS = connect4.h

# All of the object files to produce as intermediary work
OBJECTS = connect4.o

# The final program to build
EXECUTABLE = Connect4

# --------------------------------------------

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf *.o $(EXECUTABLE)
