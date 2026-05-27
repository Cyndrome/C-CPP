#include <stdio.h>

char kthChar(int n, int k)
{
    if(n == 1)
        return '0';

    int halfLength = 1 << (n - 2);

    if(k <= halfLength)
        return kthChar(n - 1, k);

    char previousCharacter = kthChar(n - 1, k - halfLength);

    if(previousCharacter == '0')
        return '1';

    return '0';
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%c\n", kthChar(n, k));
        T--;
    }

    return 0;
}
