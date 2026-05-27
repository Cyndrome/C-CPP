#include <stdio.h>

void swap (int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int T, n1, n2;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &n1, &n2);
        swap(&n1, &n2);
        printf("%d %d\n", n1, n2);
    }
    return 0;
}
