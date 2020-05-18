//comparing the two given strings.
#include <stdio.h>
int main()
{
	int counter;
	char word1[20],word2[20];
	// printf("Please enter the length of word-1: ");
	// scanf("%d",&count[0]);
	// printf("Please enter the length of word-2: ");
	// scanf("%d",&count[1]);
	for(counter=0;counter<20;counter++)
	{
		scanf("%c",&word1[counter]);
	}
	for(counter=0;counter<20;counter++)
	{
		scanf("%c",&word2[counter]);
	}
	int d=1;
	for(counter=0;counter<20;counter++)
	{
		if(word1[counter]==word2[counter])
		{
			continue;
		}
		else
		{
			d=0;
		}
	}	
	if(d==1)
	{

		printf("Both are same.\n");
	}
	else
	{
		printf("Both are not same.\n");
	}
}