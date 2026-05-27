#include <stdio.h>

int main()
{
    int N, i, div;
    scanf("%d", &N);
    int arr[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("Divisors of %d: ", arr[i]);
        div = 1;
        do
        {
            if (!(arr[i]%div))
                printf("%d ", div);
            div++;
        }while (div <= arr[i]);
        printf("\n");
    }
    return 0;
}
