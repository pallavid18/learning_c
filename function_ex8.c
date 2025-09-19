#include<stdio.h>

int maxofThree(){
	int a =69,b=20,c=57;
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
	
}
int main(){
	printf("Max of Three = %d ",maxofThree());
}
