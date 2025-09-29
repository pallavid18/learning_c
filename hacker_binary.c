#include<stdio.h>

int main(){
	FILE *fp;
	int num[5]={10,20,30,40,50};
	
	fp = fopen("C:\\filehandling\\hacker.bin","wb");
	
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	fwrite(num,sizeof(int),5,fp);
	fclose(fp);
	printf("Binary Written Successfully");
	return 0;
}
