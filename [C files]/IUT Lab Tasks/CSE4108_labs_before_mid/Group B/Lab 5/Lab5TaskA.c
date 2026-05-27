#include <stdio.h>

int main()
{
    int a, b, sum = 0, i;
    scanf("%d %d", &a, &b);

    for (i = a; i <=b; i++)
    {
        if (!(i%6))
            sum += i;
    }
    printf("Sum is: %d", sum);
}
