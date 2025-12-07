// Volume - Lab 2 Task B - Submission by 240041115

#include <stdio.h>

int main()
{
    int L, W, H;
    float P;
    scanf("%d %d %d %f", &L, &W, &H, &P);
    float V = L * W * H * P/100;

    printf("%0.2f", V);

    return 0;
}
