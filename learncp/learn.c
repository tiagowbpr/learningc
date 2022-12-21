#include <stdio.h>


void pb(int i) {
    printf("%08b\n", i);
}

/* Trying to understand the & , | and << operator */
int main(int argc, char **argv)
{   
    unsigned int i = 1;
    unsigned int ii = 2;
    unsigned int iii = 4;
    unsigned int iiii = 8;
    unsigned int iiiii = 16;
    unsigned int iiiiii = 32;
    unsigned int iiiiiii = 64;
    unsigned int iiiiiiii = 128;

    unsigned int temp;

    pb(i);
    pb(ii);
    pb(iii);
    pb(iiii);
    pb(iiiii);
    pb(iiiiii);
    pb(iiiiiii);
    pb(iiiiiiii);
    
    temp = i << 1;
    pb(temp);
    temp = i << 2;
    pb(temp);
    temp = i << 3;
    pb(temp);
    temp = i << 4;
    pb(temp);

    /* << aplies powers of 2 to a number*/

    pb(i | ii);
    pb(i | ii | iii | iiii);

    pb(i & ii);
    pb(i << 1 & ii);

    pb(temp);
    pb(temp & ~0xff);
}
