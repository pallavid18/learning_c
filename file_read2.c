#include<stdio.h>

int main(){
	FILE *fp;
	char name[50];
	int age;
	float mark;
	char str[200];
	fp = fopen("C:\\filehandling\\student_detail.txt","r");
	
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	printf("\n File Content");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
