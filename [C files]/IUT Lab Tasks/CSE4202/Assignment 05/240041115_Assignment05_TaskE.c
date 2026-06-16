#include <stdio.h>

typedef long long ll;

int possible(ll h, ll m)
{
    ll blocks = h * (h + 1) / 2;
    if (blocks <= m)
        return 1;
    else
        return 0;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T)
    {
        ll m;
        scanf("%lld", &m);

        ll low = 0;
        ll high = 2000000000;

        while (low < high)
        {
            ll mid = low + (high - low + 1) / 2;

            if (possible(mid, m))
                low = mid;
            else
                high = mid - 1;
        }

        printf("%lld\n", low);
        T--;
    }

    return 0;
}
