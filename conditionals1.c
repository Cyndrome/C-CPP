/*

This is a program to determine whether a number is negative, non-negative or positive

*/

#include <stdio.h>

int main()
{
    int i = 0;
    int num;
    while (i == 0)
    {
    printf("Please enter an integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("\nThe number you entered is negative");
    }
    else if(num == 0)
    {
        printf("The number you entered is non-negative");
    }
    else if(num > 0)
    {
        printf("The number you entered is positive");
    }

    printf("\nDo you want to exit? (1 for yes, 0 for no): ");
    scanf("%d", &i);
    }

    return 0;
}