#include <stdio.h>
#include "ticketStructure.c"
int main()
{
	FILE* fpTicket;
	Ticket Ticket1;
	printf("Enter details:\n");
	printf("Name: ");
	scanf("%s",Ticket1.name);
	printf("Mobile.no.: ");
	scanf("%s",Ticket1.phoneNo);
	printf("From: ");
	scanf("%s",Ticket1.from);
	printf("To: ");
	scanf("%s",Ticket1.to);
	printf("Fare: ");
	scanf("%f",&Ticket1.price);
	fpTicket=fopen("Ticket.dat","a")
	fwrite(&Ticket1,sizeof(Ticket1),1,fpTicket);
	fclose(fpTicket);

}