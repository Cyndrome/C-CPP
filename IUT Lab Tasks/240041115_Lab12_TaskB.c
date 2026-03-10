#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student std;

struct Student
{
    char name[100];
    int roll;
    float marks[3];
};

float calculateAverage(struct Student s)
{
    float avg = (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
    return avg;
}
void displayStudent(struct Student s)
{
    printf("Name: %s\nRoll: %d\nMarks: %.2f %.2f %.2f\nAverage: %.2f", s.name, s.roll, s.marks[0], s.marks[1], s.marks[2], calculateAverage(s));
}

int main(int argc, char* argv[])
{
    if (argc != 6)
    {
        printf("Invalid command\n");
        return 0;
    }

    std s;

    strcpy(s.name, argv[1]);
    s.roll = atoi(argv[2]);
    s.marks[0] = atof(argv[3]);
    s.marks[1] = atof(argv[4]);
    s.marks[2] = atof(argv[5]);

    displayStudent(s);
    return 0;
}
