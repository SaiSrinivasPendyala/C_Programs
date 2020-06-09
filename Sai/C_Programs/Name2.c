//Read and print the names of n waiters using malloc.
#include<stdio.h>
#include<stdlib.h>
#define NAME_LENGTH 50
int main()
{
	int counter, number_of_waiters;
	char *location_of_waiters, *current_location_of_waiters, dummy;
	printf("How many waiters are there in your restaurant? ");
	scanf("%d", &number_of_waiters);
	scanf("%c", &dummy);
	location_of_waiters = malloc(number_of_waiters * NAME_LENGTH);
	printf("Please enter their names:\n");
	for(counter = 0; counter < number_of_waiters; counter ++)
	{
		current_location_of_waiters = location_of_waiters + counter * 20;
		printf("Name of waiter %d: ", counter + 1);
		fgets(current_location_of_waiters, NAME_LENGTH, stdin);
	}
	printf("The waiters of your hotel are:\n");
	for(counter = 0; counter < number_of_waiters; counter ++)
	{
		current_location_of_waiters = location_of_waiters + counter * 20;
		printf("%d. %s", counter + 1, current_location_of_waiters);
	}
}