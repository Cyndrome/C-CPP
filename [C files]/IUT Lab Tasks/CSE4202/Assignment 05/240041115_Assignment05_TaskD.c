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
        int l = 0, r = n - 1;
        long long count = 0;
        while (l < r)
        {
            long long sum = ar[l] + ar[r];
            if (sum == x)
            {
                if (ar[l] == ar[r])
                {
                    long long len = r - l + 1;
                    count += len * (len - 1) / 2;
                    break;
                }
                int dl = 1, dr = 1;
                while (l + dl < r && ar[l + dl] == ar[l])
                    dl++;
                while (r - dr > l && ar[r - dr] == ar[r])
                    dr++;
                count += (long long)dl * dr;
                l += dl;
                r -= dr;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
        printf("%lld\n", count);
        T--;
    }
    return 0;
}
