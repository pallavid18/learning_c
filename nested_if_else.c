#include<stdio.h>

int main(){
	int ticket, idProof,luggage;
	
	printf("Do you have a ticket? (1=yes, 0=no)");
	scanf("%d",&ticket);
	
	if(ticket==1){
		printf("Do you have a ID Proof? (1=yes, 0=no) ");
		scanf("%d",&idProof );
		if(idProof==1){
			printf("Is luggauge within 20kg? (1=yes, 0=no)");
			scanf("%d",&luggage);
		if(luggage==1){
				printf("Check in SuccessFully");
			}
			else{
				printf("Extra Luggage charger apply");
			}
		}
		else{
				printf("ID proof Requried");
		}
	}
	else {
			printf("No Ticket No Entry");
	return 0;
}
