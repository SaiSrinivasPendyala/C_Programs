//Read two matrices from the user and add them.
#include <stdio.h>
int main()
{
	int row,column,counter,iterator,i=1,j=1;
	printf("Please enter the dimension of the two matrices:\n");
	printf("rows: ");
	scanf("%d",&row);
	printf("columns: ");
	scanf("%d",&column);
	printf("\n");
	int matrix1[row][column],matrix2[row][column],sum[row][column];
	printf("Matrix-1:\n");
	for(counter=0;counter<row;counter++)
	{
		printf(" row-%d:\n",i);
		for(iterator=0;iterator<column;iterator++)
		{
			printf(" ");
			scanf("%d",&matrix1[counter][iterator]);
		}
		i++;
	}
	printf("Matrix-2:\n");
	for(counter=0;counter<row;counter++)
	{
		printf(" row-%d:\n",j);
		for(iterator=0;iterator<column;iterator++)
		{
			printf(" ");
			scanf("%d",&matrix2[counter][iterator]);
		}
		j++;
	}
	printf("Sum of the given two matrices is \n");
	for(counter=0;counter<row;counter++)
	{
		for(iterator=0;iterator<column;iterator++)
		{
			sum[counter][iterator] = matrix1[counter][iterator]+matrix2[counter][iterator];
			printf("%d\t",sum[counter][iterator]);
		}
		printf("\n");
	}
	printf("\n");

}