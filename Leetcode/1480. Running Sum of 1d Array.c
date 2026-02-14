/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, csum = 0;
    scanf("%d", &n);
    int numbers[n];
    int running_summation[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++)
    {
        csum += numbers[i];
        running_summation[i] = csum;
    }
    for (i=0; i<n; i++)
    {
        printf("%d ", running_summation[i]);
    }
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;

    int *result = malloc(numsSize * sizeof *result);
    if (result == NULL) {
        return NULL;
    }

    int csum = 0;
    for (int i = 0; i < numsSize; i++) {
        csum += nums[i];
        result[i] = csum;
    }

    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int *output = runningSum(nums, n, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", output[i]);
    }

    free(output);
    return 0;
}
