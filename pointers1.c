#include <stdio.h>

int main()
{
    int a = 7;
    int *p1 = NULL;
    p1 = &a;
    int **p2;
    p2 = &p1;
    int b = 3;
    int *p3 = NULL;
    p3 = &b;
    printf("Original value of numbers: %d %d", a, b);
    printf("\nPointer level 1: %p\nPointer level 2: %p", p1, p2);

    *p1 = *p1 + *p3;
    *p3 = *p1 - *p3;
    *p1 = *p1 - *p3;

    printf ("\nNew value of numbers: %d %d", a, b);
    return 0;
}
