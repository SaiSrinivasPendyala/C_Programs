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
	memory_for_names = malloc(countof_doctors * NAME_LENGTH * 2);
	for(counter = 0; counter < countof_doctors; counter ++)
	{
		printf("Enter the name of Doctor %d: ", counter + 1);
		scanf("%c", &dummy);
		fgets(memory_for_names + counter * 20 * 2, NAME_LENGTH, stdin);
		printf("Enter the specialization of Dr.%s: ", memory_for_names + counter * 20 * 2);
		//scanf("%c", &dummy);
        fgets(memory_for_names + counter * 20 * 2 + 20, NAME_LENGTH, stdin);
	}
	printf("The doctors of your hospital are:\n");
	for(counter = 0; counter < countof_doctors; counter ++)
	{
		printf("%s, %s\n", memory_for_names + counter * 20 * 2, memory_for_names + counter * 20 * 2 + 20);
	}
}