List: ListMain.o ArrayList.o
	gcc -o List ListMain.o ArrayList.o
ArrayList.o: ArrayList.c ArrayList.h
	gcc -c ArrayList.c
ListMain.o: ListMain.c
	gcc -c ListMain.c

clear:
	rm -rf *.o
	rm -rf *.gch
	rm PointListMain

runpointlistmain:
	gcc PointListMain.c ArrayList.c Point.c -o PointListMain && ./PointListMain
