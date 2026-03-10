#include <stdio.h>
#include <stdbool.h>

bool isBeautiful(int *mat)
{
    if (mat[0] < mat[1] && mat[2] < mat[3] && mat[0] < mat[2] && mat[1] < mat[3])
        return true;
    else
        return false;
}

int main()
{
    int i, j, t;
    int arr[4];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int temp0, temp1, temp2, n;

        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (n = 0; !isBeautiful(arr) && n < 4; n++)
        {
            temp0 = arr[0];
            temp1 = arr[1];
            temp2 = arr[2];
            arr[0] = arr[3];
            arr[1] = temp0;
            arr[2] = temp1;
            arr[3] = temp2;
        }

        if (isBeautiful(arr))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
