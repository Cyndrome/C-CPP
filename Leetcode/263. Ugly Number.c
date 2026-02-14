/*
An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long int x)
{
    for (long long int i = 2; i <= sqrt(x); i++)
    {
        if (!(x % i))
            return false;
    }
    return true;
}

bool isUgly(long long int n)
{
    if (n <= 0)
        return false;
    else if (n==1)
        return true;
    int flag = 0;
    for (long long int div = 2; div <= n; div++)
    {
        if (isPrime(div) == false)
            continue;
        if (!(n % div))
        {
            if (div == 2 || div == 3 || div == 5)
                flag++;
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        return true;
    else
        return false;
}

int main()
{
    long long int number;
    scanf("%lld", &number);
    if (isUgly(number) == true)
        printf("The number is ugly.");
    else
        printf("The number is not ugly.");
    return 0;
}
