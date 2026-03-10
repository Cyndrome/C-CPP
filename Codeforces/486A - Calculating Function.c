#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, f = 0;
    scanf("%lld", &n);
    if (n%2)
        f = (-1) * ((n+1)/2);
    else
        f = n/2;
    printf("%lld", f);
    return 0;
}
