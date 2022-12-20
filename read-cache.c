#include "cache.h"

const char *sha1_file_directory = NULL;
struct cache_entry **active_cache = NULL;
unsigned int active_nr = 0, active_alloc = 0;

void usage(const char *err)
{
    fprintf(stderr, "read-tree: %s\n", err);
    exit(1);
}