//Multiplying the two given matrices.
#include <stdio.h>
int main()
{
	int row1,column1,row2,column2,i=1,j=1,sum=0;
	printf("Please enter the dimensions of the two matrices:\n");
	printf("Matrix-1:\n");
	printf("No.of rows: ");
	scanf("%d",&row1);
	printf("No.of columns: ");
	scanf("%d",&column1);
	printf("Matrix-2:\n");
	printf("No.of rows: ");
	scanf("%d",&row2);
	printf("No.of columns: ");
	scanf("%d",&column2);
	if(column1!=row2)
	{
		printf("Matrix multiplication is not possible.\n");
	}
	else
	{
		int matrix1[row1][column1],matrix2[row2][column2],counter,iterator,k;
		printf("Matrix-1:\n");
		for(counter=0;counter<row1;counter++)
		{
			printf(" row-%d:\n",i);
			for(iterator=0;iterator<column1;iterator++)
			{
				printf(" ");
				scanf("%d",&matrix1[counter][iterator]);
			}
			i++;
		}
		printf("Matrix-2:\n");
		for(counter=0;counter<row2;counter++)
		{
			printf(" row-%d:\n",j);
			for(iterator=0;iterator<column2;iterator++)
			{
				printf(" ");
				scanf("%d",&matrix2[counter][iterator]);
			}
			j++;
		}
		printf("Product of the matrices is \n");
		for(counter=0;counter<row1;counter++)
		{
			for(iterator=0;iterator<column2;iterator++)
			{
				for(k=0;k<row2;k++)
				{
					sum+=matrix1[counter][k]*matrix2[k][iterator];
				}
				//matrix3[counter][iterator] = sum;
				printf("%d\t",sum);
				sum=0;
			}
			printf("\n");
		}

	}
}