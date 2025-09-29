#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\filehandling\\write1.txt","a");
	
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	fprintf(fp,"\n Hello this is Disha ");
	fprintf(fp,"\n Hello this is  Aditya");

	
	fclose(fp);
	printf("Update Succesfully ");
	return 0;
	
}

