#include <stdio.h>

int main()
{
    int n;
    int i;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", n, i, n*i);
            if (i == 10)
            {
                printf("%d X %d = %d\n---------------\n", n, i, n*i);
            }
        }
    }

    return 0;
}