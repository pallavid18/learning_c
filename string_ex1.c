#include<stdio.h>

int main(){
	char name[20] = "Pallavi";
	printf("My Name is: %s",name);
}


void main(){
	char name[40];
	printf("Enter your  name : ");
	scanf("%s",&name);
//    gets(name);  full name print 
	printf("My Name is : %s",name);
}
