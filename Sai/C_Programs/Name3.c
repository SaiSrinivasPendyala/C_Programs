//Program to read and print the names of n bank employees and their designations.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME_LENGTH 50
int main()
{
	int count_of_employees, counter;
	char bank_name[NAME_LENGTH], *ptr_employees, *current_location_of_employee, dummy;
	printf("Enter the name of your bank: ");
	fgets(bank_name, NAME_LENGTH, stdin);
	bank_name[strlen(bank_name) - 1] = '\0';
	printf("Enter the number of employees in %s: ", bank_name);
	scanf("%d", &count_of_employees);
	scanf("%c", &dummy);
	ptr_employees = malloc(count_of_employees * NAME_LENGTH * 2);
	for(counter = 0; counter < count_of_employees; counter ++)
	{
		current_location_of_employee = ptr_employees + counter * NAME_LENGTH * 2;
		printf("Enter the name of employee %d: ", counter + 1);
		fgets(current_location_of_employee, NAME_LENGTH, stdin);
		*(current_location_of_employee + strlen(current_location_of_employee) - 1) = '\0';
		printf("Enter the designation of %s: ", current_location_of_employee);
		fgets(current_location_of_employee + NAME_LENGTH, NAME_LENGTH, stdin);
	}
	printf("The employees of your bank are:\n");
	for(counter = 0; counter < count_of_employees; counter ++)
	{
		current_location_of_employee = ptr_employees + counter * NAME_LENGTH * 2;
		printf("%d. %s, %s", counter + 1, current_location_of_employee, current_location_of_employee + NAME_LENGTH);
	}
}