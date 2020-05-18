//Finding factorial of a number by recursion.
#include <stdio.h>
int fact(int);
int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Factorial of %d is %d.\n",number,fact(number));
}
int fact(int number)
{
	if(number==0)
	{
		return 1;
	}
	else
	{
		return(number*fact(number-1));
	}
}