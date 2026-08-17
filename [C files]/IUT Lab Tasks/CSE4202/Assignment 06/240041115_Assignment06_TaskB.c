#include <stdio.h>

int main(void)
{
    FILE *in = fopen("submission_wise_marks.csv", "r");
    FILE *out = fopen("student_wise_marks.csv", "w");

    int maxA[300] = {0};
    int maxB[300] = {0};
    int maxC[300] = {0};
    int seen[300] = {0};

    char header[100];
    fgets(header, sizeof(header), in);

    int subId, stuId, marks;
    char prob;

    while (fscanf(in, "%d,%d,%c,%d", &subId, &stuId, &prob, &marks) == 4)
    {
        seen[stuId] = 1;

        if (prob == 'A')
        {
            if (marks > maxA[stuId])
                maxA[stuId] = marks;
        }
        else if (prob == 'B')
        {
            if (marks > maxB[stuId])
                maxB[stuId] = marks;
        }
        else if (prob == 'C')
        {
            if (marks > maxC[stuId])
                maxC[stuId] = marks;
        }
    }

    fprintf(out, "Student ID,Problem A Marks,Problem B Marks,Problem C Marks,Total Marks\n");

    for (int id = 101; id <= 299; id++)
    {
        if (seen[id])
        {
            double total = 0.4 * (maxA[id] + maxB[id] + maxC[id]);

            if (total > 100)
                total = 100;

            fprintf(out, "%d,%d,%d,%d,%.2f\n", id, maxA[id], maxB[id], maxC[id], total);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}
