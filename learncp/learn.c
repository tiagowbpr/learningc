#include <stdio.h>

/* func receive a pointer to an array*/
int func(unsigned char *chs)
{
    unsigned char start = 97;
    int i;
    for (i = 0; i < 20; i++) {
        *chs++ = start;
        start++;
    }
    return 0;
}

int main(int argc, char **argv)
{   
    /* Trying to understand *sha1++ = val */
    unsigned char chs[20];
    /* When creating an array you get a pointer to the first element */
    printf("%p\n", chs);

    func(chs);

    printf("%s\n", chs);

    return 0;
}
