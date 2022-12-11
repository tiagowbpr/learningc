CFLAGS=-g
CC=gcc

PROG=init-db

all: $(PROG)

init-db: init-db.o

clean:
	rm -fr *.o $(PROG) .dircache

backup: clean
	cd .. ; tar czvf dircache.tar.gz dir-cache