HEADERS = groesse.h

all: 0402 

0402.o: 0402.c $(HEADERS)
	gcc -c 0402.c -o 0402.o

groesse.o: groesse.c
	gcc -c groesse.c -o groesse.o

0402: 0402.o groesse.o
	gcc 0402.o groesse.o -o 0402

clean:
	-rm -f 0402.o
	-rm -f groesse.o
	-rm -f 0402
