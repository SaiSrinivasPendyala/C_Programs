//To print the multiplication table of a given number upto 20.
#include<stdio.h>
int main()
{
	int table_number, counter;
	printf("Please enter a number for its multiplication table upto 20: ");
	scanf("%d", &table_number);
	printf("The multiplication table of %d is:\n", table_number);
	for(counter = 1; counter <= 20; counter ++)
	{
		printf("%2d x %2d = %4d\n", table_number, counter, table_number * counter);
	}	
}