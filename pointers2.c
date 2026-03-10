#include <stdio.h>

int main()
{
    int i, j;
    int arr[5];
    int (*p)[5];
    p = &arr;
    for (i=0; i<5; i++)
    {
        scanf("%d", &(*p)[i]);
    }
    for (i=0; i<5; i++)
    {
        printf("%d\n", (*p)[i]);
    }
    return 0;
}
