#include <stdio.h>

long long sumOfSquares(int n)
{
    if (!n) return 0;
    long long int sum = n * n;
    return sum + sumOfSquares(n-1);
}

int main()
{
    int n, T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        printf ("%lld\n", sumOfSquares(n));
    }
    return 0;
}
