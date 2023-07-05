#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    // Call the wildcmp function
    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);

    // Rest of your code
    // ...

    return 0;
}
