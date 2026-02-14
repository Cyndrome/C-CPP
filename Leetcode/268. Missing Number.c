#include <stdio.h>

int missingNumber (int *nums, int numsSize)
{
    int sum_elements = 0, sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum_elements += nums[i];
        sum += i+1;
    }

    return sum - sum_elements;
}

int main()
{
    int n, missing;
    scanf ("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    missing = missingNumber(nums, n);
    printf ("%d", missing);
    return 0;
}
