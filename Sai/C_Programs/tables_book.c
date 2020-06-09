//This program prints the multiplication table for as many numbers as you need.
#include<stdio.h>
#define LAST_NUMBER 20
int main()
{
	int table_number, counter;
	char condition, dummy;
	do
	{
		printf("Enter a number to obtain its multiplication table upto %d: ", LAST_NUMBER);
		scanf("%d", &table_number);
		printf("The multiplication table of %d is:\n", table_number);
		for(counter = 0; counter <= LAST_NUMBER; counter ++)
		{
			printf("%2d x %2d = %4d\n", table_number, counter, table_number * counter);
		}
		printf("Do you need any other multiplication table?('y' or 'n'): ");
		scanf("%c", &dummy);
		scanf("%c", &condition);
	}while (condition == 'y');

}