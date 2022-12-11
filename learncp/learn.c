#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pl() {
    printf("\n");
};

int main()
{       
    int i = 1;
    char c = 'a';
    float f = 12.12;
    double d = 55.55;
    short int si = 12;
    unsigned int ui = 123213;
    long int li = 123123123;
    unsigned long int uli = 192387192386;
    unsigned long long int ulli = 2137651796132;
    signed char sc = 'w';
    unsigned char uc = 'q';
    long double ld = 123123.123123;

    printf("Hello world!\n");

    printf("int: %d or %i\n", i, i);
    printf("char: %c\n", c);
    printf("float: %f\n",f);
    printf("double: %lf\n", d);
    printf("short int: %hd\n", si);
    printf("unsigned int: %u\n", ui);
    printf("long int: %ld\n", li);
    printf("unsigned long long int: %llu\n", ulli);
    printf("signed char: %c\n", sc);
    printf("long double: %Lf\n", ld);

    printf("printf() function prints stuff\n");

    fprintf(stderr, "fprintf prints stuff to some stream\n");

    char str[] = "some random string, some more random string stuff";

    printf("pointer address: %p\n", &str);

    sprintf(&str[0], "prints to memory");
    printf("%s\n",str);

    char str1[] = "some random string, some more random string stuff";

    // sprintf(&str1+10,"prints to memory");
    // printf("\n");
    // printf(str1);

    char *chptr = malloc(100);
    char chx = 'x';
    char eos = '\0';

    for( int i = 0; i < 100; i++) {
        if(i == 99){
            memcpy(chptr+i,&eos, 1);
        } else {
            memcpy(chptr+i,&chx, 1);
        }
    }   

    for (int i = 0; i < 100; i++) {
        printf("%c", *chptr);
        chptr = chptr+1;
    }
    pl();

    return 0;
}
