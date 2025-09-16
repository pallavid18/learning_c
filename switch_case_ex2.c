#include<stdio.h>

int main(){
	char op;
	int a,b;
	printf("Enter  1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	
	printf("Enter operator(+,-,*,/) : ");
	scanf(" %c",&op);
	
	switch(op){
		case '+':printf("Sum =%d",a+b);break;
		case'-':printf("Sub = %d",a-b);break;
		case'*':printf("Multiply = %d",a*b);break;
		case'/':printf("Divide = %d",a/b);break;
		default:printf("Invalid Operator");
	}
   return 0;
}
