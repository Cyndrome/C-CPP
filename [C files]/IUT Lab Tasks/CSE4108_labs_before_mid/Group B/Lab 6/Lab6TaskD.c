#include <stdio.h>

int main()
{
    int N, i, temp, digit, rev, count = 0;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        temp = arr[i];
        rev = 0;
        while (temp > 0)
        {
            digit = temp%10;
            rev = rev * 10 + digit;
            temp = temp/10;
        }
        if (rev == arr [i])
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (!count)
        printf("None");

    return 0;
}
