#include <stdio.h>
#include "../cache.h"

static unsigned hexval(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return ~0;
}

int main(int argc, char **argv)
{   
    int i;
    for (i = 1; i < argc; i ++) {
        printf("%s: %d\n", argv[i], hexval(argv[i][0]));
    }
    return 0;
}
