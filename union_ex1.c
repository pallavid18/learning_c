#include<stdio.h>

union Employee{
	int id;
	char name[30];
	char desgination[30];
	int salary;
};
int main(){
	
	union Employee emp;
	printf("\n Enter Emp ID: ");
	scanf("%d",&emp.id);
	printf("\n Enter Emp Name :");
	scanf("%s",emp.name);
	printf("\n Enter Emp Designation: ");
	scanf("%s",emp.desgination);
	printf("\n Enter Emp Salary :");
	scanf("%d",&emp.salary);
	
	printf("\n Detail Of Employee");
	printf("\n Emp ID : %d",emp.id);
	printf("\n Emp Name  : %s",emp.name);
	printf("\n Emp Desgination : %s",emp.desgination);
	printf("\n Emp Salary : %d",emp.salary);
	
	return 0;
}
