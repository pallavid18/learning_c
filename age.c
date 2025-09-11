#include<stdio.h>

int main(){
	int age;
	
	printf("Enter ur age");
	scanf("%d",&age);
	
	printf("Eligible for Voting or not ? %d ",age>=18);
	return 0;
}
