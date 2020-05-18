//Printing the stars according to the given number.
#include <stdio.h>
int main()
{
	int limit,counter,iterator;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	if(limit%2==0)
	{
		for(counter=limit;counter>=2;counter--)
		{
			for(iterator=1;iterator<counter-1;iterator++)
			{
				printf("*");
			}		
			printf("\n");
		}

	}
}