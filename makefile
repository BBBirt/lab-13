
main: main.o my_int.o
	g++ -Wall main.o my_int.o -o main

main.o: main.cc my_int.h
	g++ -Wall main.cc -c 

my_int.o: my_int.cc my_int.h
	g++ -Wall my_int.cc my_int.h -c


clean:
	rm -rf main.o my_int.o main