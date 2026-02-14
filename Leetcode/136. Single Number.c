#include <stdio.h>

int singleNumber(int* nums, int numsSize)
{
    int single;
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count < 2)
        {
            single = nums[i];
            break;
        }
    }
    return single;
}

int main()
{
    int size, single;
    scanf ("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    single = singleNumber(arr, size);
    printf ("%d", single);
    return 0;
}
