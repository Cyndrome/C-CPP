#include <stdio.h>

int main()
{
    int x, temp, i = 5, step = 0;
    scanf("%d", &x);
    
    temp = x;
    while (temp > 0)
    {
        step += temp / i;
        temp %= i;
        i--;
    }

    printf ("%d", step);
    return 0;
}