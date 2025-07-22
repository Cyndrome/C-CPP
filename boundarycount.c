#include <stdio.h>

int main()
{
    int run;
    int b = 0;
    int o = 0;
    
    while (run >= 0)
    {
        scanf("%d", &run);
        if(run == 4)
        {
            b = b + 1;
        }
        else if(run == 6)
        {
            o = o + 1;
        }
    }

    printf("Boundaries: %d\nOver-boundaries: %d", b, o);
    return 0;
}