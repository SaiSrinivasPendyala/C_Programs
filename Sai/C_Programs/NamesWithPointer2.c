//Program to read and display the names of crew members and their positions of a film production team. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME_LENGTH 20
int main()
{
	int count_of_crew_members, counter;
	char *location_of_member_name, *current_location_of_member_name, dummy;
	printf("How many members are there in your film production team? ");
	scanf("%d", &count_of_crew_members);
	scanf("%c", &dummy);
	location_of_member_name = malloc(count_of_crew_members * NAME_LENGTH * 2);
	for(counter = 0; counter < count_of_crew_members; counter ++)
	{
		current_location_of_member_name = location_of_member_name + counter * 20 * 2;
		printf("Enter the name of member %d: ", counter + 1);
		fgets(current_location_of_member_name, NAME_LENGTH, stdin);
		*(current_location_of_member_name + strlen(current_location_of_member_name) - 1) = '\0';
		printf("Enter the position of %s: ", current_location_of_member_name);
		fgets(current_location_of_member_name + 20, NAME_LENGTH, stdin);
	}
	printf("The crew members of your film production team are:\n");
	for(counter = 0; counter < count_of_crew_members; counter ++)
	{
		current_location_of_member_name = location_of_member_name + counter * 20 * 2;
		printf("%d. %s, %s", counter + 1, current_location_of_member_name, current_location_of_member_name + 20);
	}
}