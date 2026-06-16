#include <stdio.h>
typedef long long ll;
ll a[200005];

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        ll n, x;
        scanf("%lld %lld", &n, &x);

        ll max = 0;

        for (ll i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            if (a[i] > max)
                max = a[i];
        }

        ll low = 1;
        ll high = max + x;

        while (low < high)
        {
            ll mid = low + (high - low + 1) / 2;
            ll water = 0;

            for (ll i = 0; i < n; i++)
            {
                if (a[i] < mid)
                    water += (mid - a[i]);
                if (water > x)
                    break;
            }

            if (water <= x)
                low = mid;
            else
                high = mid - 1;
        }

        printf("%lld\n", low);
        T--;
    }

    return 0;
}
