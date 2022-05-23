all: part1 part2 

part1.o: part1.cpp vector.h list.h
	g++ -Wall -o part1.o -c part1.cpp
	
part1: part1.o
	g++ -Wall -o part1 part1.o
	
part2.o: part1.cpp vector2.h list.h
	g++ -Wall -o part2.o -c part2.cpp
	
part2: part2.o
	g++ -Wall -o part2 part2.o
 

clean:
	rm -f part1 part2 *.o
