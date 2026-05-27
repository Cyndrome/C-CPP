#include <stdio.h>

int det(int n, int a[n][n])
{
    if (n == 1)
        return a[0][0];

    if (n == 2)
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];

    int value = 0;

    for (int i = 0 ; i < n ; ++i)
    {
        int sign = 1;
        if (i % 2 == 1)
            sign = -1;

        int sub_det[n-1][n-1];

        for (int row = 1 ; row < n ; row++)
        {
            int column = 0;
            for (int c = 0 ; c < n ; c++)
            {
                if (c == i)
                    continue;
                sub_det[row-1][column] = a[row][c];
                column++;
            }
        }
        value += sign * a[0][i] * det(n-1, sub_det);
    }
    return value;
}

int main()
{
    int T;
    scanf("%d", &T) ;

    while (T)
    {
        int n;
        scanf("%d", &n);
        int a[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n ; j++)
                scanf("%d", &a[i][j]);

        printf("%d\n", det(n, a));
        T--;
    }
    return 0;
}
