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

int lower_bound(long long *a, int n, long long target)
{
    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] < target)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int upper_bound(long long *a, int n, long long target)
{
    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] <= target)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main()
{
    int n, q;
    long long l, r;
    scanf("%d %d", &n, &q);
    long long ar[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &ar[i]);
    mergeSort(ar, 0, n - 1);
    for (int i = 0; i < q; i++)
    {
        scanf("%lld %lld", &l, &r);
        int count = upper_bound(ar, n, r) - lower_bound(ar, n, l);
        printf("%d\n", count);
    }
    return 0;
}

/*
Complexity O(qn)
------------------
int rangeSearch (int l, int r, int *a, int n)
{
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] <= r && a[j] >= l)
            count++;
    }
    return count;
}

int main()
{
    int q, l, r, n;
    scanf("%d", &n);
    int ar[n];
    scanf ("%d", &q);
    for (int k = 0; k < n; k++)
        scanf("%d", &ar[k]);
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d", &l, &r);
        int count = rangeSearch (l, r, ar, n);
        printf("%d\n", count);
    }
    return 0;
}
*/
