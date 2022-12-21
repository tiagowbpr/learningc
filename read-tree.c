#include "cache.h"

int main (int argc, char **argv)
{
    int fd;
    unsigned char sha1[20];

    if (argc != 2)
        usage("read-tree <key>");
    if (get_sha1_hex(argv[1], sha1) < 0)
        usage("read-tree <key>");
    for (int i = 0; i < 20; i++) {
        printf("%d : %d\n", i + 1, sha1[i]);
    }
    return 0;
}