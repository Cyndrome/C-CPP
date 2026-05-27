#include <stdio.h>

long long countPaths(int x, int y)
{
    if (x == 0 || y == 0)
        return 1;

    return countPaths(x - 1, y) + countPaths(x, y - 1);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%lld\n", countPaths(x, y));
        T--;
    }

    return 0;
}
