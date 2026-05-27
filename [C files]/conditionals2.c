/*
This program determines whether a letter is uppercase or lowercase
*/

#include <stdio.h>

int main()
{
    char ch;
    int i = 0;

    while (i == 0)
    {
    printf("Please enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase", ch);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase", ch);
    }
    
    printf("\nDo you want to exit? (1 for yes, 0 for no): ");
    scanf("%d", &i);
    }

    return 0;
}