#include <stdio.h>

int countWays(int s, int coins[], int n)
{
    if(s == 0)
        return 1;

    if(n == 0 || s < 0)
        return 0;

    int take = countWays(s - coins[n - 1], coins, n - 1);
    int skip = countWays(s, coins, n - 1);

    return take + skip;
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T)
    {
        int s, n;
        scanf("%d %d", &s, &n);
        int coins[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &coins[i]);
        printf("%d\n", countWays(s, coins, n));
        T--;
    }

    return 0;
}
