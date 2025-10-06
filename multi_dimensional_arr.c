#include<stdio.h>

int main(){
/*	int arr[2][3]={{1,2,3},{4,5,6}};
	int i , j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n ");
	}*/
	
	//diagonal element 1,2,0 
//	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int i , j;
//	for(i=0;i<3;i++){
//			printf("%d ",arr1[i][i]);
//	}
	
	//reverse diagonal 2,1,0
	int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i , j;
	for(i=0;i<3;i++){
			printf("%d ",arr2[i][2-i]);
	}
	
	return 0;
}
