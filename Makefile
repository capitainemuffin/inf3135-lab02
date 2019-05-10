.PHONY: clean all 
CFLAGS = -std=c11


all: hello

hello: hello.c
	gcc $(CFLAGS) hello.c -o hello 

clean:

	rm -f *.o;
	rm -f hello; 
