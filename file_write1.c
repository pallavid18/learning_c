#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\filehandling\\write1.txt","w");
	
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	fprintf(fp,"\n Hello this is Pallavi ");
	fprintf(fp,"\n Hello this is  Nikita");
	fprintf(fp,"\n Hello this is  Harsh");
	fprintf(fp,"\n Hello this is  Zating");
	
	fclose(fp);
	printf("Data written Sucessfully");
	return 0;
	
}
