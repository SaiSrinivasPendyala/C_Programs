//Read n numbers and select a number from them and print the index of that number.
#include <stdio.h>
int main()
{
	int count;
	printf("How many numbers do you want to enter? ");
	scanf("%d",&count);
	int numbers[count],counter;
	printf("Please enter the numbers: \n");
	for(counter=0;counter<count;counter++)
	{
		scanf("%d",&numbers[counter]);
	}
	int number,found=0;
	printf("Please select a number from the entered numbers to find its index: ");
	scanf("%d",&number);
	for(counter=0;counter<count;counter++)
	{
		if(number==numbers[counter])
		{
			printf("Index of %d is %d.\n",number,counter);
			found=1;
			break;
		}
	}
	if(found!=1)
	{
		printf("Sorry! %d is not found in the entered list of numbers.\n",number);
	}
}