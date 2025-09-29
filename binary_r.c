#include<stdio.h>

int main(){
	FILE *fp;
	int i;
	int num[5];
	
	fp = fopen("C:\\filehandling\\hacker.bin","rb");
	
	if(fp==NULL){
		printf("File Doesn't Exist or not opening");
		return 1;
		
	}
	fread(num,sizeof(int),5,fp);
	fclose(fp);
	printf("\n Binary Data Read Successfully \n ");
	for(i=0;i<5;i++){
		printf(" %d\n  ",num[i]);
	}
	return 0;
}
