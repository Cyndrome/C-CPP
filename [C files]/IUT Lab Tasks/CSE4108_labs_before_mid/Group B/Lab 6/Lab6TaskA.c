#include <stdio.h>

int main()
{
    int N, i, temp, digit, sum, count = 0;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        temp = arr[i];
        sum = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        if (!(sum%2))
            count++;
    }

    printf("%d", count);
    return 0;
}
