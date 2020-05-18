//Storing contents of a file into a structure.

#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int rollNo;
	float grade;
	struct student *next;	
};
