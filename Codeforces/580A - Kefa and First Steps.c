#include <stdio.h>

int main()
{
    int n, len = 1, max_len=1, i = 0;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[i]);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= a[i-1])
            len++;
        else
            len=1;
        if (len >= max_len)
            max_len = len;
    }
    printf("%d", max_len);
    return 0;
}
