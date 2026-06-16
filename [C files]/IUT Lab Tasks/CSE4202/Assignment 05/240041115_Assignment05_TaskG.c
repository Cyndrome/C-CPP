#include <stdio.h>
#define N 200005

int pos[N];
int temp[N];

void mergeSortedArrays(int ara[], int l, int m, int r)
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

void mergeSort(int ara[], int l, int r)
{
    if(l >= r) return;

    int m = (l + r) / 2;

    mergeSort(ara, l, m);
    mergeSort(ara, m + 1, r);

    mergeSortedArrays(ara, l, m, r);
}

int canPlace(int n, int cows, int dist)
{
    int placed = 1;
    int last = pos[0];

    for(int i = 1; i < n; i++)
    {
        if(pos[i] - last >= dist)
        {
            placed++;
            last = pos[i];

            if(placed >= cows)
                return 1;
        }
    }

    return 0;
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T)
    {
        int n, c;
        scanf("%d %d", &n, &c);

        for(int i = 0; i < n; i++)
            scanf("%d", &pos[i]);

        mergeSort(pos, 0, n - 1);

        int low = 0;
        int high = pos[n - 1] - pos[0];

        while(low < high)
        {
            int mid = low + (high - low + 1) / 2;

            if(canPlace(n, c, mid))
                low = mid;
            else
                high = mid - 1;
        }

        printf("%d\n", low);
        T--;
    }

    return 0;
}
