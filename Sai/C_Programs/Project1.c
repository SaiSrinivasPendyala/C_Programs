// A program to book a train ticket, search a ticket by PNR number, update the details and cancel a ticket.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct passenger
{
	char PNR_number[10];
	char name[20];
	int age;
	int status;
};
char PNR[10];
void book_ticket();
void print_chart();
void get_PNR();
long int search_PNR();
void show_PNR();
void print_ticket();
int update_ticket();
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
	printf("1. Book a ticket\n2. Print reservation chart\n3. Print ticket\n4. Update ticket\n5. Delete ticket\n6. Exit\n");
	printf("Enter your choice: ");
	scanf("%c", &choice);
	flush_junk();
	switch(choice)
	{
		case '1':
			book_ticket();
			break;
		case '2':
			print_chart();
			break;
		case '3':
			print_ticket();
			break;
		case '4':
			update_ticket(4);
			break;
		case '5': 
			update_ticket(5);
			break;
		case '6':
			exit(0);
	}
}
void book_ticket()
{
	FILE *fpTicket;
	struct passenger ticket_details;
	fpTicket = fopen("Passenger5.dat", "a");
	printf("Enter the following details for ticket reservation-\n");
	printf("PNR number: ");
	scanf("%s", ticket_details.PNR_number);
	printf("Name: ");
	scanf("%s", ticket_details.name);
	printf("Age: ");
	scanf("%d", &ticket_details.age);
	ticket_details.status = 1;
	fwrite(&ticket_details, sizeof(struct passenger), 1, fpTicket);
	fclose(fpTicket);
	flush_junk();
	printf("Your details are saved successfully!\n");
}
void print_chart()
{
	FILE *fpTicket;
	struct passenger ticket_details;
	fpTicket = fopen("Passenger5.dat", "r");
	printf("The reservation chart is-\n");
	while(fread(&ticket_details, sizeof(struct passenger), 1, fpTicket) == 1)
	{
		if(ticket_details.status != 0)
		{
			printf("\nPNR number: %s\n", ticket_details.PNR_number);
			printf("Name: %s\n", ticket_details.name);
			printf("Age: %d\n\n", ticket_details.age);
		}
	}
	fclose(fpTicket);
}
void get_PNR()
{
	printf("Enter your PNR number: ");
	scanf("%s", PNR);
	flush_junk();
}
long int search_PNR(char *PNR)
{
	struct passenger ticket_details;
	FILE *fpTicket;
	long int position;
	fpTicket = fopen("Passenger5.dat", "r");
	while(fread(&ticket_details, sizeof(struct passenger), 1, fpTicket) > 0)
	{
		if(strcmp(PNR, ticket_details.PNR_number) == 0)
		{
			fseek(fpTicket, -sizeof(struct passenger), SEEK_CUR);
			break;
		}
	}
	position =ftell(fpTicket);
	fclose(fpTicket);
	return position;
}
void show_PNR()
{
	struct passenger ticket_details;
	FILE *fpTicket;
	long int position;
	int found;
	position = search_PNR(PNR);
	fpTicket = fopen("Passenger5.dat", "r");
	fseek(fpTicket, position, SEEK_SET);
	found = fread(&ticket_details, sizeof(struct passenger), 1, fpTicket);
	if(found == 1)
	{
		printf("Name: %s\n", ticket_details.name);
		printf("Age: %d\n", ticket_details.age);
	}
	else
	{
		printf("Record not found!!!\n");
	}
	fclose(fpTicket);
}
void print_ticket()
{
	get_PNR();
	show_PNR();
}
int update_ticket(int operation)
{
	struct passenger ticket_details;
	FILE *fpTicket;
	long int position;
	int found;
	get_PNR();
	position = search_PNR(PNR);
	fpTicket = fopen("Passenger5.dat", "r+");
	fseek(fpTicket, position, SEEK_SET);
	found = fread(&ticket_details, sizeof(struct passenger), 1, fpTicket);
	if(found == 1)
	{
		fseek(fpTicket, -sizeof(struct passenger), SEEK_CUR);
		if(operation == 4)
		{
			printf("Enter the updated age: ");
			scanf("%d", &ticket_details.age);
			flush_junk();
		}
		else
		{
			ticket_details.status = 0;
		}
	}
	fwrite(&ticket_details, sizeof(struct passenger), 1, fpTicket);
	fclose(fpTicket);
	printf("Your data is %s successfully.\n", operation == 4 ? "updated" : "deleted");
}
int main()
{
	while(1)
	{
		printf("\nWelcome to passenger reservation enquiery system.\n");
		show_menu();
	}
}