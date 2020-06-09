//Program to read and print the employee details using structures.
#include<stdio.h>
#include<string.h>
int main()
{
	char dummy;
	struct employee_details
	{
		char name[30];
		char company_name[50];
		char employee_ID[10];
		char designation[20];
		char city[30];
		char state[30];
		int pincode;
	} personal_details, company_details, address;
	printf("Please enter the employee details.\n");
	printf("Enter your name: ");
	fgets(personal_details.name, 30, stdin);
	printf("Enter your company name: ");
	fgets(company_details.company_name, 50, stdin);
	printf("Enter your employee_id: ");
	fgets(company_details.employee_ID, 10, stdin);
	printf("Enter your designation: ");
	fgets(company_details.designation, 20, stdin);
	printf("Enter the city of residence: ");
	fgets(address.city, 30, stdin);
	printf("Enter the state of residence: ");
	fgets(address.state, 30, stdin);
	printf("Enter the pincode: ");
	scanf("%d", &address.pincode);
	printf("The employee details are:\n");
	printf("Name: %s", personal_details.name);
	printf("Company name: %s", company_details.company_name);
	printf("Employee ID: %s", company_details.employee_ID);
	printf("Designation: %s", company_details.designation);
	printf("City: %s", address.city);
	printf("State: %s", address.state);
	printf("Pincode: %d\n", address.pincode);
}