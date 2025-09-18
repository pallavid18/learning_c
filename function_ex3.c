//function with parameter but no retur
#include<stdio.h>

void  printSum(int a,int b){
	printf("Sum =  %d \n",a+b);
}
void  printSub(int a,int b){
	printf("Subtraction =  %d \n",a-b);
}
void  printMulti(int a,int b){
	printf("Multiplication =  %d \n",a*b);
}
void  printDiv(int a,int b){
	printf("Division =  %d \n",a/b);
}
int main(){
	printSum(20,50);
	printDiv(20,5);
	
	return 0;
	}
