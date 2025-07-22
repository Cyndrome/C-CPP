#include <stdio.h>

int main()
{
    int n = 100, row, col;
    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}