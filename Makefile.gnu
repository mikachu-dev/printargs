clean:
	-@rm *.exe
	-@rm *.o

build:
	g++ -std=c++17 -c arguments.cpp program.cpp termio.cpp
	g++ -std=c++17 main.cpp program.o arguments.o termio.o -o printargs.exe

rebuild: clean build

