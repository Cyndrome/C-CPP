#include <stdio.h>

int main()
{
    long long n, temp;
    int count = 0;
    int digit;
    scanf("%lld", &n);

    temp = n;
    while (temp>0)
    {
        digit = temp%10;
        if (digit == 4 || digit == 7)
        {
            count++;
        }
        temp /= 10;
    }

    if (count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}