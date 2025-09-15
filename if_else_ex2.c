#include<stdio.h>

int main(){
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("It's even number");
		
	}else{
		printf("It's a odd number");
	}
	return 0;
}
