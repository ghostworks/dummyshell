main:
	gcc -o dummyshell dummyshell.c
install:
	cp dummyshell /bin/dummyshell
clean:
	rm dummyshell
