# Makefile for HW2

CC = g++ -std=c++14

CFLAGS = -g

LDFLAGS = 	-L/Users/Hanson Nguyen/vcpkg/installed/arm64-osx/lib -ljsoncpp

INC	=	everything.h

main: main.o GPS.o Thing.o Person.o Time.o Record.o
	$(CC) $(CFLAGS) -o main.exe main.o GPS.o Thing.o Person.o Time.o Record.o

main.o:	main.cpp GPS.h Thing.h Record.h Person.h Time.h 
	$(CC) -c $(CFLAGS) main.cpp

GPS.o: GPS.cpp GPS.h 
	$(CC) -c $(CFLAGS) GPS.cpp

Time.o:	Time.cpp Time.h 
	$(CC) -c $(CFLAGS) Time.cpp

Person.o: Person.cpp Person.h
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o: Thing.cpp Thing.h 
	$(CC) -c $(CFLAGS) Thing.cpp

Record.o: Record.cpp Record.h 
	$(CC) -c $(CFLAGS) Record.cpp