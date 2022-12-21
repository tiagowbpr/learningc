#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pb(int i) {
    printf("%08b\n", i);
}

char * sha1_to_hex(unsigned char *sha1)
{
	static char buffer[50];
	static const char hex[] = "0123456789abcdef";
	char *buf = buffer;
	int i;

	for (i = 0; i < 20; i++) {
		unsigned int val = *sha1++;
		*buf++ = hex[val >> 4];
		*buf++ = hex[val & 0xf];
	}
	return buffer;
}

int main(int argc, char **argv)
{
    unsigned char chs[20];
    int i;
    unsigned char *res;
    srand(time(0));

    for (i = 0; i < 20; i++) {
        chs[i] = rand() % 256;
        pb(chs[i]);
    }
    
    res = sha1_to_hex(chs);

    printf("%s\n", res);

    return 0;
}
