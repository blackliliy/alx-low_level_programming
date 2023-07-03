#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5];
    int *p;

    a[2] = 1024;
    p = &a[2];

    /* Your line of code goes here */
    printf("a[2] = %d\n", *(p));

    /* Should print:
     * a[2] = 98
     */

    a[2] = 98;
    return (0);
}
