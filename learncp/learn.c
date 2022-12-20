#include <stdio.h>
#include "../cache.h"


int main()
{   
    if (mkdir("testdir", 0700) < 0) {
        perror("unable to create the directory");
        printf("%d\n", errno);
        exit(1);
    }
    return 0;
}
