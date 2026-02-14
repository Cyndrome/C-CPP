#include <stdio.h>

int main()
{
    int total, twenty, ten, five, one;
    printf("Enter a dollar amount: ");
    scanf("%d", &total);
    twenty = total / 20;
    ten = (total%20) / 10;
    five = (total - (twenty * 20) - (ten * 10)) / 5;
    one = total - (twenty * 20) - (ten * 10) - (five * 5);

    printf ("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", twenty, ten, five, one);
    return 0;
}
