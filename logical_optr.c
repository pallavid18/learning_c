#include<stdio.h>

int main(){
	
	int x, y ,z ;
	
	printf("Enter 1st no.");
	scanf("%d",&x);
	printf("Enter 2nd no.");
	scanf("%d",&y);
	printf("Enter 3rd no.");
	scanf("%d",&z);
	
	printf("Logical Operation Result :-  \n");
	printf("AND result: %d \n",(x>5 && y<10 && z<=20));  //AND
	printf("OR Result : %d \n ",(x>5 || y<10 || z>=15));  //OR
	printf("OR Result : %d \n ",!(x >y && y<z)); //NOT

	
	return 0;
	
}
