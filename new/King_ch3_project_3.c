#include <stdio.h>

int main()
{
    int GSI, ID, PUB, ITEM, CHECK;
    printf ("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &ID, &PUB, &ITEM, &CHECK);
    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", GSI, ID, PUB, ITEM, CHECK);
    return 0;
}
