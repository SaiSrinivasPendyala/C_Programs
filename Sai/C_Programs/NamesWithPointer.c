//Program to read and print the names and specializations of doctors in a hospital.
#include<stdio.h>
#include<stdlib.h>
#define NAME_LENGTH 20
int main()
{
	int countof_doctors, counter;
	char *memory_for_names, dummy;
	printf("Enter the number of doctors in your hospital: ");
	scanf("%d", &countof_doctors);
	scanf("%c", &dummy);
	memory_for_names = malloc(countof_doctors * NAME_LENGTH);
	for(counter = 0; counter < countof_doctors; counter ++)
	{
		printf("Enter the name of Doctor %d: ", counter + 1);
		fgets(memory_for_names + counter * 20, NAME_LENGTH, stdin);
	}
	printf("The doctors of your hospital are:\n");
	for(counter = 0; counter < countof_doctors; counter ++)
	{
		printf("%d. %s", counter + 1, memory_for_names);
		memory_for_names = memory_for_names + 20;
	}
}