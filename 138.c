//c program to read employee id,name and display and store into employee.dat file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
main()
 {
    struct Employee emp;
    FILE *file = fopen("employee.dat", "ab");
    if (file == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    getchar();
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, file);
    fclose(file);
    printf("\nEmployee details written to employee.dat successfully.\n");
}

