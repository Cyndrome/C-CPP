#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int maskA = 0, maskB = 0;
        for (int i = 0; i < n; i++)
        {
            int v;
            scanf("%d", &v);
            maskA = maskA | (1 << v);
        }
        for (int i = 0; i < m; i++)
        {
            int v;
            scanf("%d", &v);
            maskB = maskB | (1 << v);
        }
        if (maskA == maskB)
            printf("Equal\n");
        else if ((maskA & maskB) == maskA)
            printf("Proper Subset\n");
        else if ((maskA & maskB) == maskB)
            printf("Proper Superset\n");
        else
            printf("None\n");
        T--;
    }
    return 0;
}
