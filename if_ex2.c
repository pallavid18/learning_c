#include<stdio.h>

int main(){
	int a=20;
    printf("Enter ur battery precentage");
    scanf("%d",&a);
	
	if(a<=20){
		printf(" Low battery please connet to charger");
	}
	return 0;
}
