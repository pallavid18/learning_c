#include<stdio.h>

int main(){
	
	//count even or odd
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int even = 0 , odd = 0;
	int i;
	for(i=0;i<9;i++){
		if(arr[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}	
	printf("Even count: %d , Odd Count :%d",even,odd);
	
	// max element
	
	int arr1[5]={1,87,25,98,68};
	int max = arr1[0];
	for(i=1;i<5;i++){
		if(arr1[i]>max){
			max = arr1[i];
		}
	}
	printf("\n Max value : %d",max);
	
	//min element 
	int arr2[5]={0,87,25,98,68};
	int min = arr2[0];
	for(i=1;i<5;i++){
		if(arr2[i]<min){
			min = arr2[i];
		}
	}
	printf("\n Min value : %d",min);
	
	return 0;
}
