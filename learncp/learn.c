#include <stdio.h>


void pb(int i) {
    printf("%08b\n", i);
}

int main(int argc, char **argv)
{   
    unsigned char ch = 127;
    unsigned char ch2 = 255;
    static char hex[2];
    char *buf = hex;
    static const char hexchars[] = "0123456789abcdef";

    *buf++ = hexchars[ch >> 4];
    *buf = hexchars[ch & 0xf];

    pb(ch);
    pb(ch >> 4);

    pb(0xf);
    pb(ch & 0xf);
    pb(ch2 & 0xf);


    printf("--------\n");
    printf("%s\n", hex);

    *--buf = hexchars[ch2 >> 4];
    *++buf = hexchars[ch2 & 0xf];

    printf("--------\n");
    printf("%s\n", hex);

    return 0;
}
