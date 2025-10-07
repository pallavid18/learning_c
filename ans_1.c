# include<stdio.h>

int main(){
	
	// WAP to swap number using temporary variable
  /*int a , b , temp;
	printf("\n Enter Number a:");
	scanf("%d",&a);
	printf("\n Enter Number b:");
	scanf("%d",&b);
	printf("\n Before Swaping the number a: %d ",a);
	printf("\n Before Swaping the number b: %d ",b);
    temp = a;
    a = b;
    b = temp;
	printf("\n After Swaping the number a: %d ",a);
	printf("\n After Swaping the number b: %d ",b);*/
	
	
	//WAP to print ASCIIvalue of character
    /*char c;
    printf("\n Enter a character: ");
    scanf("%c", &c);
    printf("\n ASCII value of %c = %d \n", c, c);*/
    
    
    //WAP a program to calculate fahrenhit to celius 
    /*float c, f;
	printf("Enter the Fahrenheit :");
	scanf("%f",&f);
	c = (f - 32) * (5.0 / 9.0);
	printf("Celsius : %f", c);*/
	
	
	//WAP to Print Alphabets from A To Z using loop
   /* char ch;
    for (ch = 'A'; ch <= 'Z'; ch++){
        printf("%c ", ch);
    }*/
    
    
    //WAP to check whether a character is a vowelor constant
   /* char v;
    printf("Enter the Character: ");
    scanf("%c",&v);
    if (v == 'a'|| v == 'e'|| v == 'i'|| v == 'o'|| v == 'u'||v == 'A'|| v == 'E'|| v == 'I'|| v == 'O'|| v == 'U')
	{
        printf("\n %c Is a vowel  ", v);
    } else {
        printf("\n %c Is a consonant  ", v);
    } */
    

	//WAP to calculate simple intrest
	float si , p, r,t;
	printf("Enter the Principal Amount : ");
	scanf("%f",&p);
	printf("Enter the Rate : ");
	scanf("%f",&r);
	printf("Enter the Time(in year) : ");
	scanf("%f",&t);
	si = (p * r *t) / 100;
	printf("Simple Intrest is: %f",si);
	
	return 0;
}
