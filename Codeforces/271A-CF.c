#include <stdio.h>

int main()
{
    int y, i, j, temp, flag;
    scanf("%d", &y);
    y++;
    temp = y;
    int arr[4];

    while (1)
    {
        flag = 1;
        for (i = 0; i < 4; i++)
        {
            arr[3-i] = temp%10;
            temp /= 10;
        }

        for (i=0; i < 4; i++)
        {
            if (!flag) break;
            for (j = i+1; j < 4; j++)
            {
                if (!flag) break;
                if(arr[i] == arr[j])
                    flag--;
            }
        }
        if (!flag)
        {
            y++;
            temp = y;
        }
        else
            break;
    }

    printf("%d", y);
    return 0;
}
