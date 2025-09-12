#include<stdio.h>

int main(){
	
	int x=12;
	int y=13; // for complement ->+
	printf("x & y = %d \n" , x & y);  //Bitwise AND
	printf("x & y = %d \n" , x | y);  //Bitwise OR
	printf("x & y = %d \n" , x ^ y);  //Bitwise XOR
	printf("Complement =  %d \n" , ~y);  //Bitwise complement

	return 0;
}
