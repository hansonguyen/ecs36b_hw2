# Makefile for HW2

CC = g++ -std=c++14

CFLAGS = -g

LDFLAGS = -fopenmp -ljsoncpp

INC	=	everything.h

main: main.o GPS.o Thing.o Person.o Time.o Record.o
	$(CC) $(CFLAGS) -o main.exe main.o GPS.o Thing.o Person.o Time.o Record.o $(LDFLAGS)

main.o:	main.cpp GPS.h Thing.h Record.h Person.h Time.h $(INC)
	$(CC) -c $(CFLAGS) main.cpp

GPS.o: GPS.cpp GPS.h $(INC)
	$(CC) -c $(CFLAGS) GPS.cpp

Time.o:	Time.cpp Time.h $(INC)
	$(CC) -c $(CFLAGS) Time.cpp

Person.o: Person.cpp Person.h $(INC)
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o: Thing.cpp Thing.h $(INC)
	$(CC) -c $(CFLAGS) Thing.cpp

Record.o: Record.cpp Record.h $(INC)
	$(CC) -c $(CFLAGS) Record.cpp

clean:
	rm -f *.o