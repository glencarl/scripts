
CC = gcc
CFLAGS = -Wall -g

myhello.exe: hellocond.o
		$(CC) $(CFLAGS) hellocond.o -o myhello.exe

hellocond: hellocond.c
		$(CC) $(CFLAGS) -c hellocond.c

mytprint.exe: tcntprnt.o
		$(CC) $(CFLAGS) tcntprnt.o -o mytprint.exe

tcntprnt: tcntprnt.c
		$(CC) $(CFLAGS) -c tcntprnt.c

clean:
		rm -f *.o myhello.exe mytprint.exe

all: myhello.exe mytprint.exe

# Example for a program that depends on another program:
#program3: program3.o program1  # program3 depends on program1
#	$(CC) $(CFLAGS) program3.o -o program3

#program3.o: program3.c
#	$(CC) $(CFLAGS) -c program3.c
