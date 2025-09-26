#include<stdio.h>

int main(){
	int arr[5] ={10,20,30,40,50};
	
	int*p;
	p=arr;
	
	int i;
	
	printf("\n First element of array  %d",*p); //arr[0]
	printf("\n Second element of array  %d",*(p+1));
	printf("\n Third element of array  %d",*(p+2));
	printf("\n Fourth element of array  %d",*(p+3));
	printf("\n Fiveth element of array  %d",*(p+4));
	
	for(i=0;i<5;i++){
		printf("\n Element of array %d : %d",i,*(p+i));
	}
	return 0;
}
