#include <stdio.h>
#include <string.h>

int main()
{
    int N, flag = 1;
    scanf("%d", &N);
    char S[N+1];
    scanf("%s", S);
    if (N%2)
        printf("No");
    else
    {
        for (int i = 0; i < N/2; i++)
        {
            int j = i + N/2;
            if (S[i] != S[j])
            {
                flag--;
                break;
            }
        }
        if (!flag)
            printf("No");
        else
            printf("Yes");
    }
    return 0;
}
