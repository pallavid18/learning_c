#include<stdio.h>

void main(){
	
/*	char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("\n Enter Password");
	scanf("%s",&input);
	
	if(strcmp(password,input)==0)
	{
		printf("Access Granted");
		
	}
	else {
		printf("Access Denied");
	}*/
	
	char name[50]="Radha ";
	char name1[40]="Krishana ";
	char name2[40]="Radhe Radhe";
	strcat(name,name1);
	strcat(name,name2);
	printf("Concatenated String:  %s",name);
}
