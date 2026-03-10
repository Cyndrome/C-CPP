#include <stdio.h>

int main()
{
    int n, i, v_count, q_count = 0, v_petya, v_vasya, v_tonya;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        v_count = 0;
        scanf("%d %d %d", &v_petya, &v_vasya, &v_tonya);
        v_count = v_petya + v_vasya + v_tonya;
        if (v_count > 1)
            q_count++;
    }
    printf("%d", q_count);
    return 0;
}
