#include <stdio.h>

int main()
{
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    if(num >= 1 || num <= -5)
    {
        printf("The number you entered is EITHER greater than or equal to 1 OR less than or equal to -5");
    }else{
        printf("The number you entered is NEITHER greater than or equal to 1 NOR less than or equal to -5");
    }
    
    return 0;
}