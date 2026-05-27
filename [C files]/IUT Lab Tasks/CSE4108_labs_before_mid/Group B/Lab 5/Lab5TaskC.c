#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    long long int T0 = 0, T1 = 1, temp;
    printf("Sequence: ");
    for (i = 0; i < N; i++)
    {
        printf("%lld ", T0);
        temp = T0 + T1;
        T0 = T1;
        T1 = temp;
    }

    return 0;
}
