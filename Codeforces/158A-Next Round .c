#include <stdio.h>
#include <limits.h>

int main()
{
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);
    
    k -= 1;
    int arr[n]; 

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k] && arr[i] > 0)
            count++; 
    }

    printf("%d", count);
    return 0;
}