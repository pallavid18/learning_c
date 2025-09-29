#include<stdio.h>

int main(){
	FILE *fp;
	char name[50];
	int age;
	float mark;
	printf("\n Enter Name: ");
	scanf("%s",&name);
	printf("\n Enter Age: ");
	scanf("%d",&age);
	printf("\n Enter Marks: ");
	scanf("%f",&mark);
	fp = fopen("C:\\filehandling\\student_detail.txt","a");
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	fprintf(fp,"\n Name :  %s ",name);
	fprintf(fp,"\n Age:    %d", age);
	fprintf(fp,"\n Marks:  %f",mark);
	
	fclose(fp);
	printf("Data written Sucessfully");
	return 0;
	
}
