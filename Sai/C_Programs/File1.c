//The following program asks you the details of your company and records them.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME_LENGTH 50
int main()
{
	int counter;
	char company_details[NAME_LENGTH];
	FILE *fpCompany;
	fpCompany = fopen("Company.txt", "a");
	printf("What is the name of your company? ");
	fgets(company_details, NAME_LENGTH, stdin);
	fprintf(fpCompany, "%s", company_details);
	printf("In which city is your company located? ");
	fgets(company_details, NAME_LENGTH, stdin);
	for(counter = 0; counter < strlen(company_details); counter ++)
	{
		fputc(company_details[counter], fpCompany);
	}
	printf("In which state is your company located? ");
	fgets(company_details, NAME_LENGTH, stdin);
	fputs(company_details, fpCompany);
	printf("In which country is your company located? ");
	fgets(company_details, NAME_LENGTH, stdin);
	fwrite(company_details, strlen(company_details), 1, fpCompany);
}