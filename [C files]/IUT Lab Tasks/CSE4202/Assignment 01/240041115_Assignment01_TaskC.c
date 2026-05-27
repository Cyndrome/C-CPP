#include <stdio.h>

int popcount(int x)
{
    if (x == 0)
        return 0;

    int bits[32];
    int i = 0;

    while (x > 0)
    {
        bits[i++] = x % 2;
        x /= 2;
    }

    int count = 0;

    for (int j = 0; j < i; j++)
    {
        if (bits[j])
            count++;
    }

    return count;
}

int main()
{
    int T, num;
    scanf ("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &num);
        int pop = popcount(num);
        printf("%d\n", pop);
    }

    return 0;
}
