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

int findMax(stdInfo students[], int l, int r)
{
    int big_idx = l;
    for (int i = l+1; i<=r; i++)
    {
        if (students[i].total > students[big_idx].total)
            big_idx = i;
        else if (students[i].total == students[big_idx].total)
            big_idx = cmpMath(students, i, big_idx);
    }
    return big_idx;
}

void selectionSort(stdInfo students[], int n)
{
    int i, big_idx;
    for (i = 0; i<n; i++)
    {
        big_idx = findMax(students, i, n-1);
        swap(&students[i], &students[big_idx]);
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
        selectionSort(students, n);
        for (int k = 0; k < n; k++)
            printf("%d ", students[k].roll);
        printf("\n");
    }
    return 0;
}
