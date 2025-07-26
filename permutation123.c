/*
    A C program to print all the possible permutations of the integers 
    1, 2 and 3 using nested for loop.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    for (a = 1; a<=3; a++)
    {
        for (b=1; b<=3; b++)
        {
            for(c=1; c<=3; c++)
                {
                    if(b != a && c!=a && c!=b)
                    {
                        printf("%d, %d, %d\n", a, b, c);
                    }        
                }
            
        }
    }
    return 0;
}