#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T)
    {
        unsigned long long x;
        scanf("%llu", &x);

        double low = 0.0;
        double high;

        if (x > 1)
            high = (double)x;
        else
            high = 1.0;

        for (int i = 0; i < 100; i++) {
            double mid = (low + high) / 2.0;

            if (mid * mid * mid <= (double)x)
                low = mid;
            else
                high = mid;
        }

        printf("%.3f\n", low);
        T--;
    }

    return 0;
}
