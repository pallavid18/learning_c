#include<stdio.h>

void msg(){
	printf("Hello Everyone \n");
}
void star(){
	printf("************* \n");
}
int main(){
	star();
	msg();  //function call
	star();
	msg();
	msg();
	msg();
	msg();
	
	return 0;
}
