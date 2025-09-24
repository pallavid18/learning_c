#include<stdio.h>


struct EmployeeS{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};

union EmployeeU{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};


int main(){
	int a;
	char b;
	struct EmployeeS e1;
	union EmployeeU e2;
	printf("Size of Struct = %d \n ",sizeof(e1));
	printf("Size of Union = %d \n ",sizeof(e2));
	printf("Size of int = %d \n ",sizeof(a));
	printf("Size of char = %d \n ",sizeof(b));

}
