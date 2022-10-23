# Makefile for f2022, ecs36b
#
# g++ -std=c++14 test_GPS.cpp GPS.cpp -o test_GPS
#
# example: $ ./test_GPS 48.88 2.3

CC = g++ -std=c++14

# CFLAGS = -g -I/usr/include/jsoncpp

CFLAGS = -g

# CFLAGS = -g -D_ECS36B_HW7_ -I/usr/include/jsoncpp
# CFLAGS = -g -DNOT_RIGHT_NOW -I/usr/include/jsoncpp

# CFLAGS = -g -D_ECS36B_DEBUG_ -I/usr/include/jsoncpp
# CFLAGS = -g -Wall -Wstrict-prototypes
# CFLAGS = -O3

LDFLAGS = 	-L/Users/sfwu/vcpkg/installed/arm64-osx/lib -ljsoncpp

INC	=	everything.h

# old: LDFLAGS = 	-lc++ -ljsoncpp

# LDFLAGS = 	-ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -lcurl -ljsonrpccpp-client


# rules.
all: 	main

#
#

GPS.o:		GPS.cpp GPS.h $(INC)
	$(CC) -c $(CFLAGS) GPS.cpp

Record.o:	Record.cpp Record.h $(INC)
	$(CC) -c $(CFLAGS) Record.cpp

Time.o:	Time.cpp Time.h $(INC)
	$(CC) -c $(CFLAGS) Jime.cpp

Person.o:	Person.cpp Person.h $(INC)
	$(CC) -c $(CFLAGS) Person.cpp

Thing.o:	Thing.cpp Thing.h $(INC)
	$(CC) -c $(CFLAGS) Thing.cpp

main.o:	main.cpp GPS.h Thing.h Record.h Person.h Time.h $(INC)
	$(CC) -c $(CFLAGS)main.cpp

main:		GPS.o main.o Thing.o Person.o Time.o Record.o
	g++ -std=c++14 main.o GPS.o Thing.o Record.o Person.o Time.o -o main $(LDFLAGS)

clean:
	rm -f *.o *~ core main