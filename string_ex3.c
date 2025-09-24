#include<stdio.h>

int main(){
	char name[50];
	printf("Enter name : ");
	//gets(name);  //unsafe
	fgets(name,sizeof(name),stdin);  //safe
	strFun(name);
	
}
void strFun(char name[]){
	
	printf("\Your name : %s",name);
	puts(name);
}
