#include <stdio.h>

int main()
{
    int n, i, result_x = 0, result_y = 0, result_z = 0;
    scanf("%d", &n);
    int force_x[n], force_y[n], force_z[n];

    for (i = 0; i<n; i++)
    {
        scanf("%d %d %d", &force_x[i], &force_y[i], &force_z[i]);
    }

    for (i = 0; i<n; i++)
    {
        result_x += force_x[i];
        result_y += force_y[i];
        result_z += force_z[i];
    }

    if (!result_x && !result_y && !result_z)
        printf("YES");
    else
        printf("NO");
}
