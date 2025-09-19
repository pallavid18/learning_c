#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int i =-25;
	double x = 81.9 ,y = 2.3 , z = 7.8 , angle = 0.0;
	
	printf("\n Square Root (%.0f) = %.2f",x,sqrt(x)); // square root
	printf("\n Power(2,3) = %.0f",pow(2,3));         // power
	printf("\n Absolute value(%d): %d",i,abs(i));  //absolute make negative to positive vive versa
	
	printf(" \n Ceil (%.2f) = %.2f",y,ceil(y));   //ceil takes higher value //3
	printf(" \n Floor (%.2f) = %.2f",z,floor(z));  //  floor takes smaller value //7
	
	printf(" \n Sin(0) = %.2f",sin(angle));
	printf(" \n Cos(0) = %.2f",cos(angle));
	printf(" \n Tan(0) = %.2f",tan(angle));
	return 0;
	
}
