#include<stdio.h>

int main(){
	int temp;
	printf("Enter Your Temperature");
	scanf("%d",&temp);
	
	if(temp>50){
		printf("Very hot");
	}
	else if(temp<=45 && temp>35){
		printf("Hot");
	} 
	else if(temp<=35 && temp>24){
		printf("Modrate");
	} 
	else if(temp<=23 && temp>11){
		printf("Cold");
	} 
	else {
		printf("Very cold");
	}
	return 0;
}
