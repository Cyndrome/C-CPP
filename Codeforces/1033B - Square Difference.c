#include <stdio.h>
#include <math.h>

int isPrime(long long int num)
{
    if (num < 2)
        return 0;
    long long int root = (long long int)sqrt((double)num);
    while (root * root < num)
        root++;
    while (root * root > num)
        root--;
    for (long long int i = 2; i <= root; i++)
    {
        if (!(num % i))
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    long long int a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld %lld", &a, &b);
        long long int sum = a + b;
        long long int diff = a - b;
        if (diff == 1 && isPrime(sum))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
