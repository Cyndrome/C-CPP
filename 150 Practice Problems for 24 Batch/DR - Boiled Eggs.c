#include <stdio.h>

int sum_array(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i<n; i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int T, n, P, Q, i, j, sum_w;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &n, &P, &Q);
        int w[n];
        for (j = 0; j < n; j++)
            scanf("%d", &w[j]);

        sum_w = sum_array(w, n);
        if (n <= P && sum_w <= Q)
            printf("Case %d: %d\n", i+1, n);
        else
        {
            int temp = n;
            int temp_sum = sum_w;
            while (temp > P || temp_sum > Q)
                temp_sum -= w[--temp];
            printf("Case %d: %d\n", i+1, temp);
        }
    }
    return 0;
}
