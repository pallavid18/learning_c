#include<stdio.h>

int main(){
	int choice, balance=1000,amount;
	char cont;
	
	do
	{
		printf("-----ATM Menu-----\n");
		printf("1.Check Balance \n");	
		printf("2.Deposite Money \n");
		printf("3.Withdraw Money \n");
		printf("0.Exit  \n");
		printf("-------------\n");
		
		printf(" Enter Your Choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\n Your Balance is = %d",balance);break;
			case 2: printf("\n Enter Amount to deposite :");
					scanf("%d",&amount);
					balance+=amount;
					printf("Deposited Sucussefully,New Balance = %d",balance);
					break;
		    case 3: printf("\n Enter amount to be Withdraw:");
		            scanf("%d",&amount);
		            if(amount<=balance){
		            	balance-=amount;
		            printf("\n Withdraw Sucussefully,New Balance = %d",balance);
					}else{
						printf("Insufficient Balance");
					}	break;
			case 0: printf("\n Exiting ATM...");break;
			default: printf("\n Invalid Choice ");
	    }
	    if(choice!=0){
		printf("\n Do u want to Continue(y/n): ");
		scanf(" %c",&cont);
	    }
	    else{
            cont = 'n';	
	    }
    }
 while(cont=='y'|| cont=='Y');

return 0;
}
