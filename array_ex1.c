#include<stdio.h>

int main(){
	int i;
//	int marks[5] = {30,50,60,80,70};
//	printf("Array List ");
//	for(i=0;i<5;i++){
//		printf("\n %d",marks[i]);
//	}
//	marks[2]=98; //update the array
//	printf("\n Updated Array List ");
//	for(i=0;i<5;i++){
//		printf("\n %d",marks[i]);
//	}
	
	//user inputs
//	int mark[5];
//	int i;
//	printf("Enter 5 sub Marks : \n ");
//	for(i=0;i<5;i++){
//		scanf("\n %d",&mark[i]);
//	}
//    printf("Marks  are");
//    for(i=0;i<5;i++){
//    	printf("\n mark [%d] = %d \n  ",i,mark[i]);
//    	
//	}	
	
	// sum of array elements
//	int arr[]={45,67,12,34,12,10,54,454,87};
//	int sum = 0;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for(i=0;i<length;i++){
//		sum+=arr[i];
//	}
//    printf("Total Array sum: %d ",sum);
    
    //reverse of array 
//	int arr[5]={10,20,30,40,50};
//	int i;
//	printf("Array in reverse order ");
//	for(i=4;i>=0;i--){
//		printf("\n %d",arr[i]);
//	}
	
	
	// copy array to another array
	int arr[5]={10,20,30,40,50};
	int arr1[5];
	for(i=0;i<5;i++){
		arr1[i]=arr[i];
	}
	printf("Copied Array : ");
	for(i=0;i<5;i++){
		printf("\n %d",arr1[i]);
	}
	
	return 0;
}


