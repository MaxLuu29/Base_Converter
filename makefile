lab5: main.o number.o
	cc main.o number.o -o lab5 
main.o: main.c number.h 
	cc -c main.c
number.o: number.c number.h
	cc -c number.c
clean:
	rm *.o lab5 
