#include<stdio.h>

struct Student{
	int id;
	char name[50];
	int marks;
	
};

int main(){
	int n,i;
	printf("\n Enter Number of Student: ");
	scanf("%d",&n);
	
	struct Student std[n];
	
	for(i=0;i<n;i++){
		printf("\n Enter detail For Student %d :\n",i+1);
		printf("\n Enter Std ID:");
		scanf("%d",&std[i].id);
		printf("\n Enter Std Name :");
		scanf("%s",std[i].name);
		printf("\n Enter Std Marks:");
		scanf("%d",&std[i].marks);	
	
	}
		printf("\n Student Detail : ");
		for(i=0;i<n;i++){
			printf("\n ID :  %d  | Name:  %s  | Marks: %d \n ",std[i].id,std[i].name,std[i].marks);
		}
	return 0 ;
	
}
