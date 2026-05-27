#include <stdio.h>

void swap (int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int gcd (int a, int b)
{
    if (a < b)
        swap (&a, &b);
    int rem;
    rem = a % b;
    if (!rem)
        return b;
    return gcd(b, rem);
}

int main()
{
    int T, a, b;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf ("%d %d", &a, &b);
        printf ("%d\n", gcd(a, b));
    }
    return 0;
}
