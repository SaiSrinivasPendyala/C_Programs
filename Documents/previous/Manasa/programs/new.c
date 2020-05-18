//Finding the average of n marks by passing an array to a function.
#include <stdio.h>
float avg(int [], int);
int main()
{
	int marks[10], counter;
	float Average;
	for(counter = 0; counter < 10; counter++)
	{
		printf("mark-%d: ",counter+1);
		scanf("%d", &marks[counter]);
	}
	typedef struct 
	{
		
	}
	Average = avg(marks, 10);
	printf("Average of the entered marks is %.2f.\n", Average);
}
float avg(int marks[], int n)
{
	int iterator;
	float average;
	for(iterator = 0; iterator < 10; iterator++)
	{
		average += (float)marks[iterator]/10;
	}
	return average;
}