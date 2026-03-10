#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (*argv[3] == '+')
        printf("%.2f\n", atof(argv[1]) + atof(argv[2]));
    else if (*argv[3] == '-')
        printf("%.2f\n", atof(argv[1]) - atof(argv[2]));
    else if (*argv[3] == '*')
        printf("%.2f\n", atof(argv[1]) * atof(argv[2]));
    else if (*argv[3] == '/' && atoi(argv[2])!= 0)
        printf("%.2f\n", atof(argv[1]) / atof(argv[2]));
    else
        printf("Invalid operation\n");
    return 0;
}
