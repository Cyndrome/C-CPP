#include <stdio.h>
#include <math.h>

int binToDec(int bin)
{
    int dec = 0, i=0, temp = bin;
    while (bin > 0)
    {
        temp = bin % 10;
        dec += temp * pow(2, i);
        bin /= 10;
        i++;
    }
    return dec;
}

int main()
{
    int t, dec_a, dec_b, dec_c, dec_d, bin_a, bin_b, bin_c, bin_d;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d.%d.%d.%d", &dec_a, &dec_b, &dec_c, &dec_d);
        scanf("%d.%d.%d.%d", &bin_a, &bin_b, &bin_c, &bin_d);
        if (dec_a == binToDec(bin_a) && dec_b == binToDec(bin_b) && dec_c == binToDec(bin_c) && dec_d == binToDec(bin_d))
            printf("Case %d: Yes\n", i+1);
        else
            printf("Case %d: No\n", i+1);
    }
    return 0;
}
