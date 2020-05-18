#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
	char name[20];
	int account_no;
	float balance;
}details;
int main(int argc,char* argv[])
{
	details *ptr;
	FILE *fp;
	fp = fopen("Account.txt","w");
	int counter;
	if(argc != 2)
	{
		printf("Invalid number of arguments.\n");
		exit(0);
	}
	ptr = (details *)calloc(atoi(argv[1]),sizeof(details));
	printf("Enter the details:\n");
	for(counter = 0; counter < atoi(argv[1]); counter++)
	{
		printf("Account-%d: \n",counter+1);
		printf("Name of the account holder: ");
		scanf("%s",ptr->name);
		printf("Account.no: ");
		scanf("%d",&ptr->account_no);
		printf("Balance: ");
		scanf("%f",&ptr->balance);
		ptr+atoi(argv[1]);
	}
	fwrite(ptr,sizeof(details),atoi(argv[1]),fp);
	fclose(fp);



}
