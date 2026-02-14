#include <stdio.h>
#include<stdbool.h>

bool isPalindrome (long long int x)
{
    long long int temp = x;
    long long int rev = 0;
    while (temp)
    {
        rev *= 10;
        rev += temp % 10;
        temp /= 10;
    }
    if (rev == x)
        return true;
    else
        return false;
}

int main()
{
    long long int x;
    scanf ("%lld", &x);
    bool result = isPalindrome(x);
    printf("%s", result ? "true" : "false");
    return 0;
}
