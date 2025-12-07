// Scoreboard - Lab 2 Task C - Submission by 240041115

#include <stdio.h>

int main()
{
    int id, solved, penalty, scored;
    scanf("%d %d %d %d", &id, &solved, &penalty, &scored);
    printf("%-6d|%4d |%6d |%7d\n", id, solved, penalty, scored);

    return 0;
}
