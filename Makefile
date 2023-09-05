CC = zcc
SOURCES = src/*.c
ZFLAGS = +cpm -clib=8080
LIBS = include/

all: rogue
rogue:
	$(CC) $(ZFLAGS) $(SOURCES) -I$(LIBS) -o rogue.com
clean:
	rm rogue

