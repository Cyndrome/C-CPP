#include <stdio.h>

typedef struct stdInfo stdInfo;
struct stdInfo
{
    int roll;
    int math;
    int sci;
    int eng;
    int total;
};

void swap(stdInfo *a, stdInfo *b)
{
    stdInfo temp = *a;
    *a = *b;
    *b = temp;
}

int cmpRoll(stdInfo students[], int i, int j)
{
    if(students[i].roll > students[j].roll)
        return j;
    else
        return i;
}

int cmpSci(stdInfo students[], int i, int j)
{
    if(students[i].sci > students[j].sci)
        return i;
    else if (students[i].sci == students[j].sci)
        return cmpRoll(students, i, j);
    else
        return j;
}

int cmpMath(stdInfo students[], int i, int j)
{
    if(students[i].math > students[j].math)
        return i;
    else if (students[i].math == students[j].math)
        return cmpSci(students, i, j);
    else
        return j;
}

void insertionSort(stdInfo students[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0)
        {
            int better_idx = j;
            if (students[j - 1].total > students[j].total)
                better_idx = j - 1;
            else if (students[j - 1].total == students[j].total)
                better_idx = cmpMath(students, j - 1, j);

            if (better_idx == j)
            {
                swap(&students[j], &students[j - 1]);
                j--;
            }
            else
                break;
        }
    }
}

int main()
{
    int T, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        stdInfo students[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d %d %d %d", &students[j].roll, &students[j].math, &students[j].sci, &students[j].eng);
            students[j].total = students[j].math + students[j].sci + students[j].eng;
        }
        insertionSort(students, n);
        for (int k = 0; k < n; k++)
            printf("%d ", students[k].roll);
        printf("\n");
    }
    return 0;
}
