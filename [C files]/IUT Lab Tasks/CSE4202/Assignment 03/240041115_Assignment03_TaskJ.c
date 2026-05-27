#include <stdio.h>

int minimum(int a, int b)
{
    if(a < b)
        return a;

    return b;
}

int minCoins(int amount, int coins[], int n)
{
    if(amount == 0)
        return 0;

    if(n == 0 || amount < 0)
        return -1;

    int takeCurrentCoin = minCoins(amount - coins[n - 1], coins, n - 1);
    int skipCurrentCoin = minCoins(amount, coins, n - 1);

    if(takeCurrentCoin != -1)
        takeCurrentCoin = takeCurrentCoin + 1;

    if(takeCurrentCoin == -1)
        return skipCurrentCoin;

    if(skipCurrentCoin == -1)
        return takeCurrentCoin;

    return minimum(takeCurrentCoin, skipCurrentCoin);
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T)
    {
        int amount, n;
        scanf("%d %d", &amount, &n);
        int coins[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &coins[i]);
        printf("%d\n", minCoins(amount, coins, n));
        T--;
    }

    return 0;
}
