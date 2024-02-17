CC=clang
CFLAGS=-pedantic -Wall -std=c2x -O2
LDFLAGS=-fuse-ld=lld -lc
SOURCES=$(wildcard *.c)
OBJS=$(SOURCES:.c=.o)


.PHONY: all clean

all: powercalc

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

powercalc: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $< 

clean:
	rm $(OBJS) powercalc
