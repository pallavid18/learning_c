//pointer to pointer
#include<stdio.h>

int main(){
	
	int a= 10; //normal variable
	int *p; // pointer to int
	int **pp; // pointer to pointer
	
	p=&a;
	pp=&p;
	
	printf("\n Value of a = %d",a);  //10
	printf("\n Address of a = %u",&a); //6487620
	
	printf("\n p stores = %u (Address of a)",p); //6487620
	printf("\n p(value at p) = %d ",*p);//10
	
	printf("\n pp stores = %u (Address of p )",pp); //6487608
	printf("\n *pp(value at pp) = %u (Address of a )",*pp);//6487620
	printf("\n *pp(value at pp) = %u (Address of a )",**pp);
	
	return 0;
}
