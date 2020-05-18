//Read and print n marks using pointers and malloc functions
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* marks,count,counter;
	printf("Please enter the count of marks:\n");
	fscanf(stdin,"%d",&count);
	marks=(int*)(malloc(count*sizeof(int)));
	printf("Enter marks of each subject:\n");
	for(counter=0;counter<count;counter++)
	{
		printf("Subject %d of %d: ",counter+1,count);
		scanf("%d",&marks[counter]);
	}
	for(counter=0;counter<count;counter++)
	{
		printf("Marks-%d: %d\n",counter+1,marks[counter]);
	}
}