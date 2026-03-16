#include <stdio.h>
#include <string.h>

int main()
{
    int N, flag = 1;
    scanf("%d", &N);
    char W[N][11];
    scanf("%s", &W[0]);
    for (int i = 1; i < N; i++)
    {
        scanf("%s", &W[i]);
        if (W[i-1][strlen(W[i-1])-1] != W[i][0])
            flag--;

        for (int j = 0; j < i; j++)
            if (!strcmp(W[i], W[j]))
                flag--;
    }
    if (flag < 1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
