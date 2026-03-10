#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    char feeling [1000000] = "";
    for (i = 1; i < n; i++)
    {
        if (i%2)
            strcat(feeling, "I hate that ");
        else
            strcat(feeling, "I love that ");
    }
    if (i % 2)
        strcat(feeling, "I hate it");
    else
        strcat(feeling, "I love it");
    printf("%s", feeling);
    return 0;
}
