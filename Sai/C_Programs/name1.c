//Read and print the names of 5 friends.
#include<stdio.h>
#include<stdlib.h>
#define NAME_LENGTH 50
int main()
{
	int counter;
	char friend_name[5][NAME_LENGTH];
	printf("Enter the names of any 5 of your friends.\n");
	for(counter = 0; counter < 5; counter ++)
	{
		printf("Name of friend %d: ", counter + 1);
		fgets(friend_name[counter], NAME_LENGTH, stdin);
	}
	printf("The names of your friends are:\n");
	for(counter = 0; counter < 5; counter ++)
	{
		printf("%d. %s", counter + 1, friend_name[counter]);
	}
}