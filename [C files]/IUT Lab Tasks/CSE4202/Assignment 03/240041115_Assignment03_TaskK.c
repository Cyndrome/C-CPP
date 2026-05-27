#include <stdio.h>

int collatzLength(int x)
{
    int n = 1;
    if (x==1) return n;
    if (x%2)
        x = 3*x + 1;
    else
        x = x/2;
    return n + collatzLength(x);
}

int main()
{
    int x, T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &x);
        printf ("%d\n", collatzLength(x));
    }
    return 0;
}
