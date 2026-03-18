#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int n, rev = 0, dig = 0, temp;
        scanf("%d", &n);
        temp = n;
        while (temp)
        {
            dig = temp%10;
            rev = 10*rev + dig;
            temp /= 10;
        }
        if (rev == n)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
