#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        unsigned int x;
        char dir;
        unsigned long long int k;
        scanf("%u %c %llu", &x, &dir, &k);

        k = k % 32;
        unsigned int result;
        if (k == 0)
            result = x;
        else if (dir == 'L')
            result = (x << k) | (x >> (32 - k));
        else
            result = (x >> k) | (x << (32 - k));

        printf("%u\n", result);
        T--;
    }

    return 0;
}
