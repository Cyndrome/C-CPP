#include <stdio.h>

int main()
{
    int t, a, b, c, r;
    scanf("%d", &t);
    while(t--)
    {
        int network_er_baire, temp;
        scanf("%d %d %d %d", &a, &b, &c, &r);

        if (b<a)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (c-r < a && c+r > b)
            printf("%d\n", 0);

        else if (c+r > a && c-r < a)
        {
            network_er_baire = b-c-r;
            if(network_er_baire < 0)
                network_er_baire=0;
            else if(network_er_baire > b - a)
                network_er_baire=0;
            printf("%d\n", network_er_baire);
        }
        else if (c-r < b && c+r > b)
        {
            network_er_baire = c-a-r;
            if(network_er_baire < 0)
                network_er_baire=0;
            else if(network_er_baire > b - a)
                network_er_baire=0;
            printf("%d\n", network_er_baire);
        }
        else if ((c-r <= a && c+r <= a) || (c-r >= b && c+r >= b))
            printf("%d\n", b-a);
        else
        {
            network_er_baire = b - a - 2*r;
            if(network_er_baire < 0)
                network_er_baire=0;
            else if(network_er_baire > b - a)
                network_er_baire=0;
            printf("%d\n", network_er_baire);
        }
    }
    return 0;
}
