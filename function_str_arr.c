#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char *reverseChar(char *str)
{
    int len = strlen(str);
    char *s = malloc(len + 1);
    if (s==NULL)
        printf("Memory allocation failed\n");
    for (int i = 0; i < len; i++)
    {
        s[i] = str[len - 1 - i];
    }
    s[len] = '\0';
    return s;
}
*/
int *reverse_arr(int *a, int size)
{
    int *r = malloc(size * sizeof(int));
    if (r==NULL)
        printf("Memory allocation failed.\n");
    for (int i = 0; i < size; i++)
    {
        r[i] = a[size-1-i];
    }
    return r;
}

int main()
{
    /*
    char in[1001];
    scanf("%[^\n]", in);
    char *rev = reverseChar(in);
    printf("%s", rev);
    free(rev);
    return 0;
    */
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *rev = reverse_arr(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }
    free (rev);
    return 0;
}
