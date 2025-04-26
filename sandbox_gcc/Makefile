CC = g++
CFLAGS = -Wall -g

myvector.exe: simplevector.o
		$(CC) $(CFLAGS) simplevector.o -o myvector.exe

simplevector: simplevector.cpp
		$(CC) $(CFLAGS) -c simplevector.cpp

clean:
		rm -f *.o myvector.exe
