#include <stdio.h>

/*Adding fractions
The resulting fraction will not be reduced to lowest terms*/

int main(void)
{
    /*Taking input*/
    int num_1, den_1, num_2, den_2;
    printf("Enter first fraction: ");
    scanf("%d/%d", &num_1, &den_1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num_2, &den_2);

    /*Performing the operations*/
    int num_r = (num_1 * den_2) + (num_2 * den_1);
    int den_r = den_1 * den_2;

    /*Printing the result*/
    printf("The sum of these two fractions is %d/%d", num_r, den_r);

    return 0;
}
