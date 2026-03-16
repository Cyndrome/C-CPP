#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);
    int i, len = strlen(s), flag;
    if ('A' <= s[0] && 'Z' >= s[0])
    {
        flag = 1;
        for (i = 1; i < len; i++)
        {
            if('a' <= s[i] && 'z' >= s[i])
            {
                flag--;
                break;
            }
        }
        if(flag)
        {
            for (i=0; i<len; i++)
                s[i] = tolower(s[i]);
            printf("%s", s);
            return 0;
        }
        else
        {
            printf("%s", s);
            return 0;
        }
    }
    else
    {
        flag = 1;
        for (i = 1; i < len; i++)
        {
            if('a' <= s[i] && 'z' >= s[i])
            {
                flag--;
                break;
            }
        }
        if(flag)
        {
            s[0] = toupper(s[0]);
            for (i=1; i<len; i++)
                s[i] = tolower(s[i]);
            printf("%s", s);
            return 0;
        }
        else
        {
            printf("%s", s);
            return 0;
        }
    }
    return 0;
}
