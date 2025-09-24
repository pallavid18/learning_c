#include <stdio.h>
#include <string.h>

// Union
union employee {
    int id_no;
    char name[50];
    char designation[20];
    int salary;  // union members share memory
};

int main() {
    union employee emp;

    printf("Enter Id: ");
    scanf("%d", &emp.id_no);
    printf("ID = %d\n", emp.id_no);

    printf("Enter Name: ");
    scanf("%s", emp.name);
    printf("Name = %s\n", emp.name);

    printf("Enter Designation: ");
    scanf("%s", emp.designation);
    printf("Designation = %s\n", emp.designation);

    printf("Enter Salary: ");
    scanf("%d", &emp.salary);
    printf("Salary = %d\n", emp.salary);

    printf("\nNote: In union, only the last entered value (salary) is valid.\n");

    return 0;
}
