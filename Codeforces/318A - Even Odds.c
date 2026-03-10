#include <stdio.h>

int main()
{
    long long i, n, k, odd_init = 1, even_init = 2, j = 0;
    scanf("%lld", &n);
    scanf ("%lld", &k);
    long long arr[n];

    for (i = 0; i<n/2; i++)
    {
        arr[i] = odd_init + i*2;
        arr[i+(n/2)] = even_init + i*2;
    }

    printf("%lld", arr[k-1]);

    return 0;
}
