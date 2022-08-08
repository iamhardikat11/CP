#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 500
#define MAX_LINE_LENGTH 250
struct StudentData
{
    char Name[100];
    float CGPA;
    char RollNo[50];
};
void sortAlphabetically(struct StudentData sd[], int count);
int main()
{
    int noOfStudents;
    FILE *textfile;
    char line[MAX_LINES][MAX_LINE_LENGTH];
    int n = 0;
    textfile = fopen("input.txt", "r");
    if (textfile == NULL)
        return 1;
    char studentCount[5];
    fgets(studentCount, MAX_LINE_LENGTH, textfile);
    noOfStudents = atoi(studentCount);
    fseek(textfile, 0, SEEK_SET);
    struct StudentData sd[noOfStudents];
    // char listOfNames[noOfStudents][100];
    while (fgets(line[n], MAX_LINE_LENGTH, textfile))
    {
        if (n > 0)
        {
            sscanf(line[n], "%s %f %[^\t\n]", sd[n - 1].RollNo, &sd[n - 1].CGPA, sd[n - 1].Name);
        }
        n++;
    }

    // for (int i = 0; i < noOfStudents; i++)
    // {
    //     strcpy(listOfNames[i], sd[i].Name);
    //     printf("Name %d is %s\n", i + 1, sd[i].Name);
    // }

    sortAlphabetically(sd, noOfStudents);

    fclose(textfile);
    return 0;
}

void sortAlphabetically(struct StudentData sd[], int count)
{
    struct StudentData sdTemp;
    for (int i = 0; i < count; i++)
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(sd[i].Name, sd[j].Name) > 0)
            {
                sdTemp = sd[i];
                sd[i] = sd[j];
                sd[j] = sdTemp;
            }
        }
    FILE *txtfile = NULL;
    txtfile = fopen("output.txt", "w");
    for (int i = 0; i < count; i++)
    {
        fprintf(txtfile, "%s %s %.2f", sd[i].Name, sd[i].RollNo, sd[i].CGPA);
        fprintf(txtfile, "\n");
    }
    fclose(txtfile);
}
