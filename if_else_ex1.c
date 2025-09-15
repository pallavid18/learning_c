#include<stdio.h>

int main(){
	int amount;
	printf("Enter your shopping amount");
	scanf("%d",&amount);
	
	if(amount>499){
		printf("Congrats, You got Free Delivery");
	}
	else {
		printf("Delivery charges will apply");
	}
	return 0;
	
}
