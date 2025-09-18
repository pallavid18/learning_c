#include<stdio.h>

void rect(int l, int w)
{
	printf("Area of Rectangle =  %d", l*w);
}

int main()
{
	int l, w;
	printf("\n Enter Length :");
	scanf("%d",&l);
	printf(" \n Enter Width  : ");
	scanf("%d",&w);
	rect(l,w);
}
