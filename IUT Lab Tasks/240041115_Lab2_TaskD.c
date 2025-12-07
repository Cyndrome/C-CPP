// Difference - Lab 2 Task D - Submission by 240041115

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int four = n/1000;
    int three = n/100 - four * 10;
    int two = n/10 - four * 100 - three * 10;
    int one = n - four * 1000 - three * 100 - two * 10;
    int difference = four + three - two - one;
    printf("%d", difference);

    return 0;
}
