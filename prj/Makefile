CPPFLAGS = -Wall -pedantic

a.out: main.o DataGen.o DVDdisk.o DVDlist.o Statistics.o
	g++ ${CPPFLAGS} main.o DataGen.o DVDdisk.o DVDlist.o Statistics.o

main.o: inc/DataGen.hh src/main.cpp
	g++ -c ${CPPFLAGS} src/main.cpp

DataGen.o: inc/DataGen.hh src/DataGen.cpp
	g++ -c ${CPPFLAGS} src/DataGen.cpp

DVDdisk.o: inc/DVDdisk.hh src/DVDdisk.cpp
	g++ -c ${CPPFLAGS} src/DVDdisk.cpp

DVDlist.o: inc/DVDlist.hh inc/DVDdisk.hh src/DVDlist.cpp
	g++ -c ${CPPFLAGS} src/DVDlist.cpp

Statistics.o: inc/Statistics.hh inc/DVDlist.hh src/Statistics.cpp
	g++ -c ${CPPFLAGS} src/Statistics.cpp

clean:
	rm -f *.o 
