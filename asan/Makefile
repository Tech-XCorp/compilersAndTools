CC=/scr_ivyamd/gcc-trunk/bin/gcc
CFLAGS+=-Wall -Wpedantic -g -O0 -std=c99 -fdiagnostics-color=auto
LDFLAGS+=-fsanitize=address

all: main

main: main.o get_array.o

.PHONY: clean
clean:
	rm *.o main
