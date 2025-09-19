#include<stdio.h>
#define PI 3.1416
float areaofCircle(){
     
     float r = 7;
     return PI*r*r ;
}
 int getCuberoot(){
 	int n= 7;
 	return n*n*n;
 }
int getSquareroot(){
	int i,n=25;
	for(i=1;i*i<=n;i++);
		return i-1;
}


int main(){
	
	printf("\n Area of Circle = %.2f ",areaofCircle());
	printf("\n Square Root = %d ",getSquareroot());
	printf("\n Cube Root = %d ",getCuberoot());
	
	return 0;
}
