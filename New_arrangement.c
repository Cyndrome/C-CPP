#include <stdio.h>

int main()
{
    int i, n, k, odd_init = 1, even_init = 2, temp, j = 0;
    scanf("%d", &n);
    scanf ("%d", &k);
    int arr[n];

    if (n%2)
        temp = n/2 + 1;
    else
        temp = n/2;
    for (i = 0; i<temp; i++)
    {
        arr[i] = odd_init + i*2;
    }

    temp = n-i+1;

    for (i = temp; i<n; i++)
    {
        arr[i] = even_init + j*2;
        j++;
    }

    printf("%d ", arr[k-1]);

    return 0;
}
