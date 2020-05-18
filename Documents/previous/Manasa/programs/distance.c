//Finding distance between two points by reading points using structures.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct 
{
	float x;
	float y;
}points;
int main()
{
	points A, B;
	float distance;
	printf("Enter the coordinates of the point 'A'\n");
	printf("x-coordinate: ");
	scanf("%f", &A.x);
	printf("y-coordinate: ");
	scanf("%f", &A.y);
	printf("Enter the coordinates of the point 'B'\n");
	printf("x-coordinate: ");
	scanf("%f", &B.x);
	printf("y-coordinate: ");
	scanf("%f", &B.y);
	distance = ((B.x-A.x)*(B.x-A.x))+((B.y-A.y)*(B.y-A.y));
	distance = sqrt(distance);
	printf("The distance points A and B is %f.\n", distance);
	return 0;
}

