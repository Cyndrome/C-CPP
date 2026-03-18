#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        int p, l;
        scanf("%d %d", &p, &l);

        int total_time = 4 * (abs(p - l) + p) + 19;

        printf("Case %d: %d\n", i, total_time);
    }

    return 0;
}
