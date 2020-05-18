//Read and print 5 marks using arrays
#include <stdio.h>
#define COUNT 5
int main()
{
	int marks[COUNT],counter;
	printf("Please enter the marks of each subject:\n");
	for(counter=0;counter<COUNT;counter++)
	{
		printf("subject %d of %d: ",counter+1,COUNT);
		scanf("%d",&marks[counter]);
	}
	for(counter=0;counter<COUNT;counter++)
	{
		printf("Marks-%d: %d\n",counter+1,marks[counter]);
	}
}