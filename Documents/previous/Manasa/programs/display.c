//Display aii namesin a file
#include <stdio.h>
int main()
{
	FILE* fpNames;
	char names[20];
	printf("Displaying all names in the file:\n");
	fpNames=fopen("FileOfNames","r");
	while(fgets(names,20,fpNames)!=NULL)
	{
		printf("%s\n",names);
	}
	fclose(fpNames);

}