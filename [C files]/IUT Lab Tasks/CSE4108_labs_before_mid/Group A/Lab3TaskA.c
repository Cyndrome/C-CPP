/*
[SLIGHTLY MODIFIED by Syed Rifat Raiyan sir]
You are given a duration in milliseconds. Your job is to convert it into hours, minutes, seconds and milliseconds,
and then print the result in a clock-like HH:MM:SS.MS format.
*/

#include <stdio.h>

int main()
{
    int T, h, m, s, ms;
    scanf("%d", &T);
    ms = T % 1000;
    T /= 1000;
    h = T/3600;
    m = T % 60;
    s = T % 3600;

    printf("%d:%d:%d\.%d", h, m, s, ms);
    return 0;
}
