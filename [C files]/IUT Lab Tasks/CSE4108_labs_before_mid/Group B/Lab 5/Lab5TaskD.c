/*
Captain's shield
----------------
Captain Bangladesh needs a shield that shrinks evenly with each row. Given an integer N, print an inverted
triangle of asterisks with w rows. Each next row is indented by one more space and has fewer stars, forming a
centered triangle.

Sample output for N = 3:

*****
 ***
  *
*/

#include <stdio.h>

int main()
{
    int N, i, j, k;
    scanf("%d", &N);
    for (i = N; i > 0; i--)
    {
        for (k = i; k < N; k++)
            printf(" ");
        for (j = 2*i - 1; j > 0; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
