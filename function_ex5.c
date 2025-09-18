#include<stdio.h>

void printTable(int num){
	 int i;
     for(i=1;i<=10;i++){
     	 printf(" %d x %d = %d \n",num,i,i*num);
	 }

}

int main(){
	int num;
	printf("\n Enter Number =  ");
	scanf("%d",&num);
	printTable(num);
}
