#include <stdio.h>

int main()
{   
    int n = 5;
    int *nptr = &n;

    printf("%p\n", nptr);
    printf("%d\n", *nptr);

    *nptr = 10;

    printf("%p\n", nptr);
    printf("%d\n", *nptr);
    
    return 0;
}
