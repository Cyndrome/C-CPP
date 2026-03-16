#include <stdio.h>

int max_arr(int *a, int n)
{
    int max = a[0];
    for (int i=1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int min_arr(int *a, int n)
{
    int min = a[0];
    for (int i=1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main()
{
    int n, m, r, i, min_buy, max_sell, quant, closing_balance;
    scanf("%d %d %d", &n, &m, &r);
    int b[n];
    int s[m];
    for (i=0; i<n; i++)
        scanf("%d", &b[i]);
    for (i=0; i<m; i++)
        scanf("%d", &s[i]);
    min_buy = min_arr(b, n);
    max_sell = max_arr(s, m);
    quant = r/min_buy;
    closing_balance = r - quant * min_buy + max_sell * quant;
    if (closing_balance < r)
        closing_balance = r;
    printf("%d", closing_balance);
    return 0;
}
