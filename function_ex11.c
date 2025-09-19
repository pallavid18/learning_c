#include<stdio.h>

int main(){
//	int num=10;
	if(evenodd(11)){
		printf(" \n Is Even ");
	}else {
		printf("\n Odd ");
	}
	
//	int x= evenodd(num);
//	if(x==1){
//		printf("Even";)
//	}else{
//		printf("odd");
//	}
	return 0;
}

int evenodd(int num){
	return num % 2 ==0;
	
//	if(num%2==0){
//		return 1;
//	}else {
//		return 0;
//	}
}
