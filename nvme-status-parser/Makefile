CC=clang
CFLAGS=-pedantic -Wall -std=c2x -O2
LDFLAGS=-fuse-ld=lld -lc
SOURCES=$(wildcard *.c)
OBJS=$(SOURCES:.c=.o)


.PHONY: all clean

all: nvme-parse-status

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

nvme-parse-status: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $< 

clean:
	rm $(OBJS) nvme-parse-status
