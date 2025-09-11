#include<stdio.h>

int main(){
	 
	 int num1, num2;
	 printf("Enter 1st no: ");
	 scanf("%d",&num1);
	 printf("Enter 2nd no: ");
	 scanf("%d",&num2);
	 
	 printf("\n Relational Operations Result \n");  
	 printf("\n num1==num2: %d \n ", num1==num2); //Equal to 
	 printf("\n num1!=num2: %d \n ", num1!=num2);//Not Equal to
	 printf("\n num1>num2: %d \n ", num1>num2);//Grater than
	 printf("\n num1<num2: %d \n ", num1<num2); //Less than
	 printf("\n num1>=num2: %d \n ", num1>=num2);//Grater than Equal to
	 printf("\n num1<=num2: %d \n ", num1<=num2);//Less than Equal to 
	 return 0;
}
