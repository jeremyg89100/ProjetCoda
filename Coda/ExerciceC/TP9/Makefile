CC = gcc
CFLAGS = -Wall
TARGET = main
SRCS = $(wildcard *.c)

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

re: clean all