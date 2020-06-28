// Program to open, read, update and delete a bank account.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct bank
{
	char account_number[10];
	char customer_name[20];
	char home_branch[20];
	int status;
};
char account[10];
void open_account();
void print_all_accounts();
void get_account();
long int search_account();
void show_account();
void print_account_details();
int update_account();
void flush_junk()
{
	char dummy;
	do
	{
		scanf("%c", &dummy);
	} while(dummy != '\n');
}
void show_menu()
{
	char choice;
	printf("1. Open account\n2. Print account details\n3. Search by account number\n4. Update account\n5. Delete account\n6. Exit\n");
	printf("Enter your choice: ");
	scanf("%c", &choice);
	flush_junk();
	switch(choice)
	{
		case '1':
			open_account();
			break;
		case '2':
			print_all_accounts();
			break;
		case '3':
			print_account_details();
			break;
		case '4':
			update_account(4);
			break;
		case '5':
			update_account(5);
			break;
		case '6':
			exit(0);
		default:
			printf("Please enter the appropriate choice!\n");
	}
}
void open_account()
{
	struct bank account_details;
	FILE *fpBank;
	fpBank = fopen("Bank1.dat", "a");
	printf("Please enter the following details for account opening-\n");
	printf("Account number: ");
	scanf("%s", account_details.account_number);
	printf("Customer name: ");
	scanf("%s", account_details.customer_name);
	printf("Home branch: ");
	scanf("%s", account_details.home_branch);
	account_details.status = 1;
	fwrite(&account_details, sizeof(struct bank), 1, fpBank);
	flush_junk();
	fclose(fpBank);
	printf("Your details are successfully saved!\n");
}
void print_all_accounts()
{
	struct bank account_details;
	FILE *fpBank;
	fpBank = fopen("Bank1.dat", "r");
	printf("The details of all accounts are-\n");
	while(fread(&account_details, sizeof(struct bank), 1, fpBank) == 1)
	{
		if(account_details.status != 0)
		{
			printf("Account number: %s\n", account_details.account_number);
			printf("Customer name: %s\n", account_details.customer_name);
			printf("Home branch: %s\n\n", account_details.home_branch);
		}
	}
	fclose(fpBank);
}
void get_account()
{
	printf("Enter your account number: ");
	scanf("%s", account);
	flush_junk();
}
long int search_account(char *account)
{
	struct bank account_details;
	FILE *fpBank;
	long int position;
	fpBank = fopen("Bank1.dat", "r");
	while(fread(&account_details, sizeof(struct bank), 1, fpBank) == 1)
	{
		if(strcmp(account, account_details.account_number) == 0)
		{
			fseek(fpBank, -sizeof(struct bank), SEEK_CUR);
			break;
		}
	}
	position = ftell(fpBank);
	fclose(fpBank);
	return position;
}
void show_account()
{
	struct bank account_details;
	FILE *fpBank;
	long int position;
	int found;
	position = search_account(account);
	fpBank = fopen("Bank1.dat", "r");
	found = fread(&account_details, sizeof(struct bank), 1, fpBank);
	fseek(fpBank, position, SEEK_SET);
	printf("Your account details are-\n");
	if(found == 1)
	{
		printf("Customer name: %s\n", account_details.customer_name);
		printf("Home branch: %s\n", account_details.home_branch);
	}
	else
	{
		printf("Record not found!!!\n");
	}
	fclose(fpBank);
}
void print_account_details()
{
	get_account();
	show_account();
}
int update_account(int response)
{
	struct bank account_details;
	FILE *fpBank;
	long int position;
	int found;
	get_account();
	position = search_account(account);
	fpBank = fopen("Bank1.dat", "r+");
	fseek(fpBank, position, SEEK_SET);
	found = fread(&account_details, sizeof(struct bank), 1, fpBank);
	if(found == 1)
	{
		fseek(fpBank, -sizeof(struct bank), SEEK_CUR);
		if(response == 4)
		{
			printf("Enter your updated home branch: ");
			scanf("%s", account_details.home_branch);
			flush_junk();
		}
		else
		{
			account_details.status = 0;
		}
	}
	fwrite(&account_details, sizeof(struct bank), 1, fpBank);
	fclose(fpBank);
	printf("Your account is %s successfully!\n", response == 4 ? "updated" : "deleted");
}
int main()
{
	while(1)
	{
		printf("\nWelcome to Srini Bank!\n");
		show_menu();
	}
}