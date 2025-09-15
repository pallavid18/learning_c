#include<stdio.h>

int main(){
	int open, foodReady,payment;
	
	printf("Is Hotel Open? (1=yes, 0=no)");
	scanf("%d",&open);
	
	if(open==1){
		printf("Is Food Ready? (1=yes, 0=no) ");
		scanf("%d",&foodReady );
		if(foodReady==1){
			printf("Paymet? (1=yes, 0=no)");
			scanf("%d",&payment);
		if(payment==1){
				printf("Payment Succefully");
			}
			else{
				printf("Try Again...");
			}
		}
		else{
				printf("Wait for food to be ready");
		}
	}
	else {
			printf("Sorry  it's close");
	}
	return 0;
}
