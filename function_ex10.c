//function with parameter with return 
#include<stdio.h>

int main(){
	int x= 60, y= 90;
//	int result = sum(x,y);
	printf("\n Sum = %d",sum(x,y));
	printf("\n Multiply  = %d",multi(x,y));
	printf("\n Division = %d",div(x,y));
	printf("\n Subtraction = %d",sub(x,y));
	return 0;
}
int sum(int a , int b){
	return a+b;
}

int multi(int a , int b){
	return a*b;
}

int div(int a , int b){
	return a/b;
}

int sub(int a , int b){
	return a-b;
}
