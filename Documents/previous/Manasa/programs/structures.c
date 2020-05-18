#include <stdio.h>
#include "ticketStructure.c"
int main()
{
	//j=journey.
	// int seat=03,ticketNo=12345,jDay=20,jMonth=03,jYear=2030;
	Ticket customer1;
	printf("Name: ");
	gets(customer1.name);
	printf("Mobile.no.: ");
	gets(customer1.phoneNo);
	printf("From: ");
	gets(customer1.from);
	printf("To: ");
	gets(customer1.to);
	printf("Amount: ");
	scanf("%f", &customer1.price);
	printf("\n");
	printf("  MANASA TRAVELS  \n\n");
	// printf("Ticket.No.: %d\n", ticketNo);
	printf("NAME: %s\n", customer1.name);
	printf("MOBILE.NO.: %s\n", customer1.phoneNo);
	// printf("JOURNEY DATE: %d-%d-%d\n",jDay,jMonth,jYear);
	// printf("SEAT.NO.: %d\n",seat);
	printf("FROM: %s\n",customer1.from);
	printf("TO: %s\n",customer1.to);
	printf("TOTAL FARE: %.2f\n",customer1.price);
	printf("\n");

	// fwrite(&customer1,sizeof(customer1),1,stdout);
	// fclose(stdout)
	// fread(&customer1,sizeof(customer1),1,stdout);
	//fwrite(Ticket);seat$
}