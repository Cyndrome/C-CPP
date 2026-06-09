#include <stdio.h>
#define N 100005
long long temp[N];

void mergeSortedArrays(long long ara[], int l, int m, int r)
{
    int i = l, j = m + 1, k;
    for(k = l; k <= r; k++)
    {
        if(i > m) temp[k] = ara[j++];
        else if(j > r) temp[k] = ara[i++];
        else if(ara[i] < ara[j]) temp[k] = ara[i++];
        else temp[k] = ara[j++];
    }
    for(k = l; k <= r; k++) ara[k] = temp[k];
}

void mergeSort(long long ara[], int l, int r)
{
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(ara, l, m);
    mergeSort(ara, m + 1, r);
    mergeSortedArrays(ara, l, m, r);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T)
    {
        int n;
        long long x;
        scanf("%d %lld", &n, &x);
        long long ar[n];
        for (int i = 0; i < n; i++)
            scanf("%lld", &ar[i]);
        mergeSort(ar, 0, n - 1);
        int l = 0, r = n - 1, found = 0;
        while (l < r)
        {
            long long sum = ar[l] + ar[r];
            if (sum == x)
            {
                found = 1;
                break;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
        if (found)
            printf("YES\n");
        else
            printf("NO\n");
        T--;
    }
    return 0;
}
