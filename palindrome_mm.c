#include <stdio.h>

int main()
{
    int n, sum, temp;
    scanf("%d", &n);
    temp = n;

    while(temp>0)
    {
        sum *= 10;
        sum += temp%10;
        temp /= 10;
    }
    printf("%d reversed = %d\n", n, sum);
    if (sum == n)
        printf("Is a palindrome.");
    else
        printf("Isn't a palindrome.");

    return 0;
}
