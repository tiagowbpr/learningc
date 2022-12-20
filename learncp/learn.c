#include <stdio.h>
#include "../cache.h"


int main()
{   
    char *home = getenv("HOME");
    if (home) printf("%s\n", home);
    return 0;
}
