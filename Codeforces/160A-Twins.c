#include <stdio.h>

int main()
{
    int n, i, sum=0, subset_sum = 0;
    scanf("%d", &n);
    int coin_values[n];
    for (i = 0; i<n; i++)
    {
        scanf("%d", &coin_values[i]);
        sum+=coin_values[i];
    }
    sum /= 2;
    for (i = 0; i < n; i++)
    {
        subset_sum = coin_values[i];
        for (j = i+1; j < n; j++)
        {
            subset_sum += coin_values[j];
        }
    }
    return 0;
}
