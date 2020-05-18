//Reading n numbers and finding the maximum number.
#include <stdio.h>
int main()
{
	int count,maxNumber = 0;
	printf("How many numbers do you want to enter? ");
	scanf("%d",&count);
	int number[count],counter;
	for(counter=0;counter<count;counter++)
	{
		scanf("%d",&number[counter]);
		if(number[counter]>maxNumber)
		{
			maxNumber = number[counter];
		}
	}

	printf("Maximum of the given numbers is %d.\n",maxNumber);
}