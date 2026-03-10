#include <stdio.h>

int main()
{
    int i, j;
    int ar[3][5] = {{0, 2, 4, 6, 8}, {1, 3, 5, 7, 9}, {-10, -20, -30, -40, -50}};
    int *p = &ar[0][0];

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
            printf("%d ", *(p+i*5+j));
        printf("\n");
    }

    return 0;
}
