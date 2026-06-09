#include <stdio.h>

double cubeRoot (int x)
{
    double l = 0, r = x, mid, eps = 0.0001;

    while(l <= r)
    {
        mid = (l + r) / 2;
        if(mid * mid * mid > x) r = mid - eps;
        else l = mid + eps;
    }

    return r;
}

int main()
{
    int T;
    int x;
    double crt;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &x);
        crt = cubeRoot(x);
        printf("%0.3lf\n", crt);
    }
    return 0;
}
