#include <stdio.h>

/* func receive a pointer to an array*/
int func(unsigned char *chs)
{
    printf("%d\n", *chs++);
    printf("%d\n", *chs++);
    printf("%d\n", *chs++);
    printf("%d\n", *++chs);
    printf("%d\n", *++chs);
    printf("%d\n", *++chs);
}

int main(int argc, char **argv)
{   
    /* Trying to understand *sha1++ = val */
    unsigned char chs[20];
    chs[0] = 1;
    chs[1] = 2;
    chs[2] = 3;
    chs[3] = 4;
    chs[4] = 5;
    chs[5] = 6;
    chs[6] = 7;
    /* When creating an array you get a pointer to the first element */
    printf("%p\n", chs);

    func(chs);

    return 0;
}
