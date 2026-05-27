#include <stdio.h>

int div_check(int n1, int n2)
{
    int temp = n2-1;
    if ((n1 & temp) == 0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int init, n;
    scanf ("%d %d", &init, &n);
    for (int i = 0; i < n; i++)
    {
        int yr, diff;
        scanf("%d", &yr);
        diff = yr - init;
        if (diff < 0)
            diff = 0 - diff;
        if (div_check(diff, 128))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

/*ALT APPPROACH w/o bitwise, division or modulus operators
int rem (int num, int x)
{
    int t, temp = num, res;
    while (temp > 0)
    {
        temp = temp - x * t;
        t++;
    }
    res = t-1;
    return num - x*res;
}
int main() {

    int init, n_query, yr;
    scanf("%d %d", &init, &n_query);

    for (int i = 0; i < n_query; i++)
    {
        scanf("%d", &yr);
        if (!rem(yr, 128))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
*/
