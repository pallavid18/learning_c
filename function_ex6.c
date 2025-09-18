#include<stdio.h>

int main()
{
	int optMark, totalMark;
	printf("Enter Optain Marks : ");
	scanf("%d",&optMark);
	printf("Enter Total Mark :");
	scanf("%d",&totalMark);
	percent(optMark,totalMark);
}
void percent(int optMark, int totalMark){
	float per =  (((float)optMark*100)/totalMark);
	printf(" Caluculate Percentage =  %.2f%%", per);
}
