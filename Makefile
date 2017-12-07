CFLAGS=-c -Wall -O2
LIBS = -lm -lpthread

all: liblcd1602.a

liblcd1602.a: lcd1602.o
	ar -rc liblcd1602.a lcd1602.o ;\
	sudo cp liblcd1602.a /usr/local/lib ;\
	sudo cp lcd1602.h /usr/local/include

lcd1602.o: lcd1602.c
	$(CC) $(CFLAGS) lcd1602.c

clean:
	rm *.o liblcd1602.a
