CFLAGS=-g
CC=gcc

PROG=init-db read-tree

all: $(PROG)

init-db: init-db.o

read-tree: read-tree.o read-cache.o
	$(CC) $(CFLAGS) -o read-tree read-tree.o read-cache.o $(LIBS)

clean:
	rm -fr *.o $(PROG) .dircache

backup: clean
	cd .. ; tar czvf dircache.tar.gz dir-cache