/*
A program to find sum of digits of a number.
For T testcases, the user enters a number n and the program
outputs the sum of its digits.
*/

#include <iostream>
using namespace std;
using str = string;

int main()
{
    int T, n, temp, digit, sum;
    cin >> T;
    while (T)
    {
        sum = 0;
        cin >> n;
        temp = n;
        while (temp)
        {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        cout << sum << endl;
        T--;
    }
    return 0;
}
