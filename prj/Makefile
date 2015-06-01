CPPFLAGS = -Wall -pedantic

a.out: main.o DataGen.o DVDdisk.o
	g++ ${CPPFLAGS} main.o DataGen.o DVDdisk.o

main.o: inc/DataGen.hh src/main.cpp
	g++ -c ${CPPFLAGS} src/main.cpp

DataGen.o: inc/DataGen.hh src/DataGen.cpp
	g++ -c ${CPPFLAGS} src/DataGen.cpp

DVDdisk.o: inc/DVDdisk.hh src/DVDdisk.cpp
	g++ -c ${CPPFLAGS} src/DVDdisk.cpp

clean:
	rm -f *.o 