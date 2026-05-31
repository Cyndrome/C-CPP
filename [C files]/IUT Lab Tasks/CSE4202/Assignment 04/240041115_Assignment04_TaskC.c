#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        int n;
        scanf("%d", &n);

        char words[100][21];
        for (int i = 0; i < n; i++)
            scanf("%s", words[i]);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (strcmp(words[j], words[j + 1]) > 0)
                {
                    char tmp[25];
                    strcpy(tmp, words[j]);
                    strcpy(words[j], words[j + 1]);
                    strcpy(words[j + 1], tmp);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i > 0)
                printf(" ");
            printf("%s", words[i]);
        }
        printf("\n");
        T--;
    }

    return 0;
}
