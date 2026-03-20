#include <stdio.h>
#include <string.h>
#include <ctype.h>

void insertCharAtIndex(char *str, int index, char to_insert)
{
    int len = strlen(str);
    memmove(str + index + 1, str + index, len - index + 1);
    str[index] = to_insert;
}

void removeCharAtIndex(char *str, int index)
{
    for (int i = index; str[i] != '\0'; i++)
        str[i] = str[i + 1];
}

int main() {
    char str[201];
    if (scanf("%s", str) != 1) return 0;

    for (int i = 0; str[i] != '\0'; )
    {
        char low = tolower(str[i]);

        if (low == 'a' || low == 'o' || low == 'y' || low == 'e' || low == 'u' || low == 'i')
            removeCharAtIndex(str, i);
        else
        {
            str[i] = low;
            insertCharAtIndex(str, i, '.');
            i += 2;
        }
    }
    printf("%s", str);
    return 0;
}
