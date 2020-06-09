//Program to print multiplication table for any given number upto 20 and then save it into a file.
#include<stdio.h>
#define LAST_NUMBER 20
int main()
{
	int table_number, counter;
	FILE *fpTable;
	fpTable = fopen("multi_table.txt", "a");
	printf("This program prints the multiplication table for a given number upto %d.\n", LAST_NUMBER);
	printf("Enter a number for which you need the multiplication table: ");
	scanf("%d", &table_number);
	printf("The multiplication table of %d is:\n", table_number);
	fprintf(fpTable, "The multiplication table of %d is:\n", table_number);
	for(counter = 1; counter <= LAST_NUMBER; counter ++)
	{
		printf("%2d x %2d = %4d\n", table_number, counter, table_number * counter);
		fprintf(fpTable, "%2d x %2d = %4d\n", table_number, counter, table_number * counter);
	}
}