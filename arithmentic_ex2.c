#include<stdio.h>

int main(){
	
	int appleQty,oilQty,milkQty;
	int applePrice,oilPrice,milkPrice;
	int total;
	int paid;
	
	applePrice = 50;
	oilPrice = 25;
	milkPrice=30;
	
	printf("Enter Quantiy of apple(kg)");
	scanf("%d",&appleQty);
	printf("Enter Quantiy of oil(ltr)");
	scanf("%d",&oilQty);
	printf("Enter Quantiy of milk(ltr)");
	scanf("%d",&milkQty);
	
	total = (appleQty*applePrice)+(oilQty*oilPrice)+(milkQty*milkPrice);
	printf("Total Bill Amount: %d \n ",total);
	
	printf("Enter amount paid by customer");
	scanf("%d",&paid);
	
	printf("Change to return %d \n",paid-total);
	
	return 0;
}
