List: ListMain.o ArrayList.o
	gcc -o List ListMain.o ArrayList.o
ArrayList.o: ArrayList.c ArrayList.h
	gcc -c ArrayList.c
ListMain.o: ListMain.c
	gcc -c ListMain.c

clear:
	rm -rf *.o
	rm -rf *.gch
	rm -rf List

runnamecardlistmain:
	gcc NameCardListMain.c ArrayList.c Namecard.c -o NameCardListMain && ./NameCardListMain
