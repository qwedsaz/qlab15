
CC = gcc

mlbDemo: mlbDriver.c mlb.o
	$(CC) -o mlbDriver mlb.o mlbDriver.c

mlb.o: mlb.h mlb.c
	$(CC) -c -o mlb.o mlb.c
