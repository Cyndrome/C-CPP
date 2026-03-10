#include <stdio.h>

int main()
{
    int t, l, r, d, u, i;
    scanf("%d", &t);
    for (i=0; i<t; i++)
    {
        scanf("%d %d %d %d", &l, &r, &d, &u);
        if (l == r && r == d && d == u)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
