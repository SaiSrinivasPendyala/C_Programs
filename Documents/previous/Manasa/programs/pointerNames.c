//Read and print n names using pointers and malloc function
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count,counter;
	printf("Please enter the count of names: ");
	fscanf(stdin,"%d",&count);
	printf("Enter names:\n");
	char** names;
	names=(char**)(malloc(count*sizeof(char*)));
	for(counter=0;counter<count;counter++)
	{
		names[counter]=(char*)(malloc(20));
	}
	for(counter=0;counter<count;counter++) {
		printf("name %d of %d ",counter+1,count);
		fscanf(stdin,"%s",names[counter]);
	}
	for(counter=0;counter<count;counter++)
	{
		fprintf(stdout,"Name-%d: %s\n",counter+1,names[counter]);
	}
}