#include<stdio.h>

int main(){
	int age;
	printf("Enter Your age");
	scanf("%d",&age);
	
	if(age<=5){
		printf("Ticket Free - Enjoy");
	}
	else if(age>=6 && age<10){
		printf("Half Ticket");
	} 
	else if(age>12 && age<60){
		printf("Full Ticket");
	} 
	else if(age>60 && age<75){
		printf("Cenior Citizon-Half");
	} 
	else {
		printf("Free Ticket");
	}
	return 0;
}
