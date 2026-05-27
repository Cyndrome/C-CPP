#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float r;
    int n = 1;
    int nl;
    printf ("Please enter the first term, the common ratio and the number of terms: ");
    scanf ("%f %f %d", &a, &r, &nl);
    float T = a * pow(r, n-1);
    
    while (n <= nl)
    {
        printf("%0.4f + ", T);
        n = n + 1;
        T = a * pow(r, n-1);
    }
    
    return 0;
}