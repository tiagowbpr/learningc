#include <stdio.h>

void printn(int *nptr){
    printf("%d\n", *nptr);
}

void printl(char *cptr){
    printf("%c\n", *cptr);
}

void print(void *ptr, char type){
    switch (type){
        case 'i':printf("%d\n",*((int*)ptr));
            break;
        case 'c':printf("%c\n",*((char*)ptr));
            break;
    }
}

int main()
{   
    int i = 9;
    char l = 'l';

    printn(&i);
    printl(&l);

    print(&i, 'i');
    print(&l, 'c');
    
    return 0;
}
