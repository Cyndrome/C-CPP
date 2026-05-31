#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        char s[101], t[101];
        scanf("%s %s", s, t);

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
            freq[s[i] - 'a']++;

        for (int i = 0; i < n; i++)
            freq[t[i] - 'a']--;

        int anagram = 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                anagram = 0;
                break;
            }
        }

        if (anagram)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
