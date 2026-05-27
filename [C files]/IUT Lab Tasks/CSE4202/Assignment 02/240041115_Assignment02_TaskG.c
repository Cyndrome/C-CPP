#include <stdio.h>

int long long powr(int a, int p)
{
    if (!p) return 1;
    long long half = powr(a, p/2);
    if (p%2)
        return a * half * half;
    else
        return half*half;
}

int main()
{
    int T, a, p;
    scanf("%d", &T);

    while (T)
    {
        scanf("%d %d", &a, &p);
        printf("%lld\n", powr(a, p));
        T--;
    }

    return 0;
}
