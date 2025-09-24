#include<stdio.h>
#include<string.h>
void main(){
//length of string
//	char name[20] = "Pallavi Dhope ";
//	printf("\n My Name is: %s",name);
//	printf("\n Length is : %d",strlen(name));
	
	
	// user input
//	char name[40];
//	printf("\n Enter your  name : ");
//	gets(name);
//	printf("\n My Name is: %s",name);
//	printf("\n Length is : %d",strlen(name));
	
	
	
//	char name1[40]="Pallavi Dhope "; //copy
//	char name2[40];
//	strcpy(name2,name1);
//	printf("\n Name 1 = %s",name1);
//	printf("\n Name 2 = %s",name2);
//	
//	char name3[40];   //copy using user input
//	char name4[40];
//	printf("\n Enter your  name : ");
//	gets(name3);
//	strcpy(name4,name3);
//	printf("\n My Name is: %s",name3);
//	printf("\n Name = %s",name4);
	
	//campare string 
	char s1[20]="Pallavi";
	char s2[20]="Pallavi";  
	if(strcmp(s1,s2)==0)
		printf("String are Equal");
	else 
		printf("Strings are not equal");
		
	char s3[20];
	char s4[20];
	printf("\n Enter Name :");
	gets(s3);
	printf("\n Enter 2nd Name :");
	gets(s4);
	if(strcasecmp(s3,s4)==0){
		printf("String are Equal");
	}	
	else {
		printf("Strings are not equal");
	}
		
	
	

}
