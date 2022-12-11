#include <stdio.h>
#include "prints.h"

int main()
{   
    int numbers[] = {12, 54, 777, 1, 90};

    printf("%p\n", numbers);
    printf("%p\n", numbers+1);

    pd(numbers[1]);
    pp(&numbers[1]);
    pd(*numbers);
    pd(*(numbers+2));
    return 0;
}
