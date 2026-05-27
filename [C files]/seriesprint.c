/*
A program to print the numbers of an arithmetic series
*/

#include <stdio.h>

int main()
{
    float a;
    float d;
    int n = 1; 
    int nl;
    printf ("Please enter the first term, the common difference and the number of terms, seperated by spaces: ");
    scanf ("%f %f %d", &a, &d, &nl);
    float T = a + (n-1)*d; 

    while (n <= nl)
    {
        printf("%0.1f + ", T);
        n = n + 1;
        T = a + (n-1)*d; 
    }

    return 0;
}