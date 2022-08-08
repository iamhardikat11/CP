#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
   char name[100];
   double CGPA;
   char roll[100];
} Student;

Student temp;

void sortString(Student arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (strcmp(arr[i].name, arr[j].name) > 0)
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}
int main()
{
   int MAX_READ_LENGTH = 1000;
   int MAX_READS = 1000;
   FILE *file = NULL;
   char READ[MAX_READS][MAX_READ_LENGTH];
   file = fopen("input.txt", "r");
   int n = 0;
   char student[100];
   fgets(student, MAX_READ_LENGTH, file);
   n = atoi(student);
   Student sr[n];
   fseek(file, 0, SEEK_SET);
   for(int i=0;fgets(READ[n], MAX_READ_LENGTH, file); i++)
   {
        if (n <= 0) 
           break;
        else 
            sscanf(READ[n], "%s %lf %[^\t\n]", sr[n - 1].roll, &sr[n - 1].CGPA, sr[n - 1].name);
        n++;
   }
   sortString(sr, n);
   fclose(file);
   file = fopen("output.txt", "w");
   for (int i = 0; i < n; i++)
      fprintf(file, "%s %s %.2f\n", sr[i].name, sr[i].roll, sr[i].CGPA);
   return 0;
}
