#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        selection_sort(arr, n);

        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                count++;
        }

        printf("%d\n", count);
        T--;
    }

    return 0;
}
