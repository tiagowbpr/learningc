#include <stdio.h>

void pb(int i) {
    printf("%08b\n", i);
}

/* Trying to understand if (val & ~0xff) */
int main(int argc, char **argv)
{   
    unsigned int val = 12;
    pb(~0xff);
    pb(0xff);
    printf("%d\n", 0xff);
    /* 0xff is the maximum number represented by one byte 11111111 
     * ~0xff flips all the bits and aparently ~ operator returns a
     * 4 byte size number, an int?
    **/

    pb(val & ~0xff);
    val = 255;
    pb(val & ~0xff);
    val = 256;
    pb(val & ~0xff);

    printf("-------\n");

    val = 34;
    if(val & ~0xff)
        pb(val & ~0xff); /* less than 255 */

    val = 256;
    if(val & ~0xff)
        pb(val & ~0xff); /* greater than 255, will print*/
    
    return 0;
}
