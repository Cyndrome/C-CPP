#include <stdio.h>

void reverseArray(int ara[], int n)
{
    if (n <= 1) return;

    int temp = ara[0];
    ara[0] = ara[n-1];
    ara[n-1] = temp;

    reverseArray(ara + 1, n - 2);
}

int main()
{
    int T, n, i, j, k;
    scanf("%d", &T);
    for (i=0; i<T; i++)
    {
        scanf ("%d", &n);
        int ar[n];
        for (j=0; j < n; j++)
            scanf("%d", &ar[j]);
        reverseArray(ar, n);
        for (k = 0; k < n; k++)
            printf("%d ", ar[k]);
    }
    return 0;
}
