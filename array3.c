#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for (i=9; i >= 0; i--)      //prints the elements in reverse index order
    {
        printf("%d\n", ara[i]);
    }

    return 0;
}