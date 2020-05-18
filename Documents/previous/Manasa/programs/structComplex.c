//Finding the sum of two complex numbers using structures.
#include <stdio.h>
typedef struct number
{
	int real,imaginary;
}complex;
int main()
{
	complex number[2];
	int c1 = 0, c2 = 0, counter;
	printf("Finding the sum of two complex numbers of the type x + iy.\n");
	for(counter = 0; counter < 2; counter++)
	{
		printf("x%d = ",counter+1);
		scanf("%d", &number[counter].real);
		printf("y%d = ",counter+1);
		scanf("%d", &number[counter].imaginary);
		c1+=number[counter].real;
		c2+=number[counter].imaginary;
	}
	printf("Sum of the two given complex numbers is %d + i%d.\n", c1, c2);
}
