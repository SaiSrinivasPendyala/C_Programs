//Read and print 5 names using arrays
#include <stdio.h>
#define COUNT 5
int main()
{
	char names[COUNT][20];
	int counter;
	printf("Please enter names:\n");
	for(counter=0;counter<COUNT;counter++)
	{
		printf("name %d of %d - ",counter+1,COUNT);
		scanf("%s",names[counter]);
	}
	for(counter=0;counter<COUNT;counter++)
	{
		printf("Name-%d: %s\n",counter+1,names[counter]);
	}
}