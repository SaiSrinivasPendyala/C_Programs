#include <stdio.h>
#include "ticketStructures.c"
int main()
{
	printf("Name: %s\n",Ticket1.name);
	printf("Mobile.No.: %s\n",Ticket1.phoneNo);
	printf("From: %s\n",Ticket1.from);
	printf("To: %s\n",Ticket1.to);
	printf("Fare: %f\n",Ticket1.price);
	fread(&Ticket1,sizeof(Ticket1),1,stdout);
} 