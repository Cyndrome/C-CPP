#include <stdio.h>

int main()
{
    int y, temp, i = 0;
    int arr[4];
    scanf("%d", &y);
    
    do
    {
        temp = y;
        arr[i] = temp % 10;
        if (i>=1)
        {
            if (arr[i] == arr[i-1])
            {
                y++;
                continue;
            }
        }
        temp /= 10;
        i++;  
    }while(temp>0);
    printf("%d", y);
    return 0;
}