#include "cache.h"

void usage(const char *err)
{
    fprintf(stderr, "read-tree: %s\n", err);
    exit(1);
}

int main (int argc, char **argv)
{
    int fd;
    unsigned char sha1[20];

    if (argc != 2)
        usage("read-tree <key>");
    return 0;
}