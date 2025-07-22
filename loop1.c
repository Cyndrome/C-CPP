/*
A program to print all the numbers from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n = 1; 
    int i; 
    printf("Please enter the last number you want to print: ");
    scanf("%d", &i);

    while (n <= i)
    {
        printf("%d ", n);
        n++;
    }

    return 0;
}