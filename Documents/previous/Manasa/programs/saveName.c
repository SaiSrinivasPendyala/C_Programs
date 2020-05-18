#include <stdio.h>
int main()
{
	FILE* fpNames;
	char name[20];
	scanf("%s",name);
	fpNames=fopen("FileOfNames","a");
	fprintf(fpNames,"%s",name);
	fclose(fpNames);
}