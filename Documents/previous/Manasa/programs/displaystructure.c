#include <stdio.h>
#include "ticketStructure.c"
int main()
{
	FILE* fpTicket;
	fpTicket=fopen("Ticket.dat","r");
	while(fread(&Ticket1,sizeof(Ticket1),1,fpTicket)
	{
		printf("%s",)
	}
}