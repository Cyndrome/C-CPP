#include <stdio.h>
#include <float.h>

int main()
{
    float N, min = FLT_MAX;

    while (1)
    {
        scanf("%f", &N);
        if (N <= 0) break;
        if (N < min)
            min = N;
    }
    if (min != FLT_MAX)
        printf("Smallest number is: %.2f", min);
    else
        printf("Smallest number is: NONE");
    return 0;
}
