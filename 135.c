//program to manage an employee payroll system. employee details should include their name,employee id, designation,and salary
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 10
struct Employee
 {
    char name[100];
    int emp_id;
    char designation[100];
    float salary;
};
struct Employee employees[MAX_EMPLOYEES];
int num_employees = 0;

void add_employee();
void display_employees();
void calculate_average_salary();
void find_highest_salary();
void find_lowest_salary();
int main()
 {
    int choice;
    do {
        printf("\n===== Employee Payroll System =====\n");
        printf("1. Add a new employee\n");
        printf("2. Display all employees\n");
        printf("3. Calculate average salary\n");
        printf("4. Find employee with highest salary\n");
        printf("5. Find employee with lowest salary\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                display_employees();
                break;
            case 3:
                calculate_average_salary();
                break;
            case 4:
                find_highest_salary();
                break;
            case 5:
                find_lowest_salary();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
void add_employee()
 {
    if (num_employees >= MAX_EMPLOYEES)
    {
        printf("Maximum limit of employees reached. Cannot add more.\n");
        return;
    }
    struct Employee *emp = &employees[num_employees];

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp->name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp->emp_id);
    printf("Enter Designation: ");
    scanf(" %[^\n]", emp->designation);
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    num_employees++;
    printf("Employee added successfully.\n");
}
void display_employees()
 {
    if (num_employees == 0)
    {
        printf("No employees in the system.\n");
        return;
    }
    printf("\n%-5s%-20s%-10s%-10s\n", "ID", "Name", "Designation", "Salary");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < num_employees; ++i)
    {
        printf("%-5d%-20s%-10s%-10.2f\n", employees[i].emp_id, employees[i].name,
               employees[i].designation, employees[i].salary);
    }
}
void calculate_average_salary()
 {
    if (num_employees == 0)
    {
        printf("No employees in the system.\n");
        return;
    }
    float total_salary = 0.0;
    for (int i = 0; i < num_employees; ++i)
    {
        total_salary += employees[i].salary;
    }
    float average_salary = total_salary / num_employees;
    printf("Average Salary of all employees: %.2f\n", average_salary);
}
void find_highest_salary()
{
    if (num_employees == 0)
    {
        printf("No employees in the system.\n");
        return;
    }
    float max_salary = employees[0].salary;
    int max_index = 0;
    for (int i = 1; i < num_employees; ++i)
     {
        if (employees[i].salary > max_salary)
        {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }
    printf("Employee with the highest salary:\n");
    printf("%-5s%-20s%-10s%-10s\n", "ID", "Name", "Designation", "Salary");
    printf("----------------------------------------------------\n");
    printf("%-5d%-20s%-10s%-10.2f\n", employees[max_index].emp_id, employees[max_index].name,
           employees[max_index].designation, employees[max_index].salary);
}
void find_lowest_salary()
 {
    if (num_employees == 0)
    {
        printf("No employees in the system.\n");
        return;
    }
    float min_salary = employees[0].salary;
    int min_index = 0;
    for (int i = 1; i < num_employees; ++i)
    {
        if (employees[i].salary < min_salary)
        {
            min_salary = employees[i].salary;
            min_index = i;
        }
    }
    printf("Employee with the lowest salary:\n");
    printf("%-5s%-20s%-10s%-10s\n", "ID", "Name", "Designation", "Salary");
    printf("----------------------------------------------------\n");
    printf("%-5d%-20s%-10s%-10.2f\n", employees[min_index].emp_id, employees[min_index].name,
           employees[min_index].designation, employees[min_index].salary);
}

