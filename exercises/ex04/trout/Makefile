run:
	./trout

trout: main.c trout.h trout.c util.h util.c
	gcc -Wall -g -o trout main.c util.c

main: main.c trout.c trout.h
	gcc -c main.c

trout: trout.c trout.h
	gcc -c trout.c

util: util.c util.h
	gcc -c util.c
