) //program to read student name and any of the identity proof
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

struct Student {
    char name[50];
    char aadhar[15];
    char passport[15];
    char pan[15];
    char license[15];
};
void readStudentDetails(struct Student students[], int *count);
void displayAllStudents(struct Student students[], int count);
void searchByAadhar(struct Student students[], int count, char aadhar[]);
int main()
 {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    char searchAadhar[15];
    do {
        printf("\nMenu:\n");
        printf("1. Add Student Details\n");
        printf("2. Display All Students\n");
        printf("3. Search by Aadhar Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:  readStudentDetails(students, &count); break;
            case 2: displayAllStudents(students, count); break;
            case 3:  printf("Enter Aadhar Number to search: ");
                fgets(searchAadhar, sizeof(searchAadhar), stdin);
                searchAadhar[strcspn(searchAadhar, "\n")] = '\0';
                searchByAadhar(students, count, searchAadhar);    break;
            case 4:   printf("Exiting program.\n");  break;
            default: printf("Invalid choice. Please enter again.\n");
        }
    } while (choice != 4);
}
void readStudentDetails(struct Student students[], int *count)
 {
    if (*count >= MAX_STUDENTS)
{
        printf("Maximum number of students reached.\n");
        return;
    }
    struct Student newStudent;
    printf("Enter student name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Enter Aadhar Number: ");
    fgets(newStudent.aadhar, sizeof(newStudent.aadhar), stdin);
    newStudent.aadhar[strcspn(newStudent.aadhar, "\n")] = '\0';

    printf("Enter Passport Number: ");
    fgets(newStudent.passport, sizeof(newStudent.passport), stdin);
    newStudent.passport[strcspn(newStudent.passport, "\n")] = '\0';

    printf("Enter PAN Number: ");
    fgets(newStudent.pan, sizeof(newStudent.pan), stdin);
    newStudent.pan[strcspn(newStudent.pan, "\n")] = '\0';

    printf("Enter Driving License Number: ");
    fgets(newStudent.license, sizeof(newStudent.license), stdin);
    newStudent.license[strcspn(newStudent.license, "\n")] = '\0';
    students[*count] = newStudent;
    (*count)++;
    printf("Student details added successfully.\n");
}
void displayAllStudents(struct Student students[], int count)
 {
    if (count == 0)
    {
        printf("No students added yet.\n");
        return;
    }
    printf("\nStudent details:\n");
    for (int i = 0; i < count; i++)
     {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Aadhar Number: %s\n", students[i].aadhar);
        printf("Passport Number: %s\n", students[i].passport);
        printf("PAN Number: %s\n", students[i].pan);
        printf("Driving License Number: %s\n", students[i].license);
        printf("\n");
    }
}
void searchByAadhar(struct Student students[], int count, char aadhar[])
 {
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].aadhar, aadhar) == 0)
        {
            printf("Student found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Aadhar Number: %s\n", students[i].aadhar);
            printf("Passport Number: %s\n", students[i].passport);
            printf("PAN Number: %s\n", students[i].pan);
            printf("Driving License Number: %s\n", students[i].license);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Student with Aadhar Number '%s' not found.\n", aadhar);
    }
}


