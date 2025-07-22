#include <stdio.h>

int main()
{
    int m = 0, n = 5, i;

    for(i = 1; i<=10; i++)
    {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }
    return 0;
}