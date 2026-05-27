#include <stdio.h>

int main()
{
    int ara[5] = {0, 5, 7, 13, 82};
    int i;
    for (i = 0; i <= 4; i++)
    {
        if (i == 0)
        {
            printf("The %dst entry is %d\n", i+1, ara[i]);
        }
        else if (i == 1)
        {
            printf("The %dnd entry is %d\n", i+1, ara[i]);    
        }
        else if (i==2)
        {
            printf("The %drd entry is %d\n", i+1, ara[i]);
        }
        else
        {
            printf("The %dth entry is %d\n", i+1, ara[i]);
        }
    }
    return 0;
}