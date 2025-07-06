//program to read number of semester and no of sub in each sem ,print semester wise total
#include <stdio.h>

void calculateSemesterTotals(int numSemesters)
 {
    int i, j;
    int numSubjects;
    int total;

    for (i = 1; i <= numSemesters; i++)
        {
        printf("Enter number of subjects in Semester %d: ", i);
        scanf("%d", &numSubjects);

        total = 0;
        for (j = 1; j <= numSubjects; j++)
        {
            int marks;
            printf("Enter marks for Subject %d in Semester %d: ", j, i);
            scanf("%d", &marks);
            total += marks;
        }
        printf("Total marks for Semester %d: %d\n", i, total);
    }
}
int main()
{
    int numSemesters;
    printf("Enter number of semesters: ");
    scanf("%d", &numSemesters);
    calculateSemesterTotals(numSemesters);
}

