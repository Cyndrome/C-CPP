#include <stdio.h>

int main()
{
    int ID;
    scanf ("%d", &ID); // takes the ID as input
    char group = 'B';
    int a = ID / 100; // 240041115 --> 2400411
    int b = ID % 2; // For even, b = 0; for odd, b = 1
    int c = (a%2 == 0); // For odd third digit, c = 0; for even, c = 1
    printf("%d%c", c + 1, group - b);
    return 0;
}
