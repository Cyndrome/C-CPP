#include <stdio.h>

int main()
{
    char c = 'a', s = '-';
    int x = 3, y, z = 0;
    y -= y; // y = y - y = 0
    y = (y==z); // y and z are equal. TRUE. y =1
    z = 2*x + 1;
    y++; // y = y + 1 = 1 + 1 = 2
    c += y; // c = 'a' + 2 = 'c'
    printf("%c", c); //prints "c"
    c += y; // c = 'c' + 2 = 'e'
    printf ("%c%c%c", 's', c, s); //prints "se-"
    y = x % y; // y = 3 % 2 = 1
    printf("%d%d0%d", x+1, y, z); // prints "4107"
    return 0;
}
