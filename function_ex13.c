#include<stdio.h>

int main(){
	int bal=1000;
	int amount;
    displayMsg();
    balance(bal);
    int rate=getInterestRate();
    printf("\n Current Interest Rate : %d%%",rate);
    
    printf("\n Enter amount to deposite : ");
    scanf("%d",&amount);
    bal=deposite(bal,amount);
    printf("After Deposte,");
    balance(bal);
}

void displayMsg(){
	printf("\n ************************************");
	printf("\n ----- Welcome To SBI ATM------------");
	printf("\n ************************************");
}

void balance(int bal){
	printf("\n Your current balance : %d",bal);
}

int getInterestRate(){
	return 5;
}
int deposite(int bal,int amount){
	bal+=amount;
	return bal;
}

