#include <stdio.h>
int main()
{
	int *p,a[5],counter;
	p = a;
	//q = &p;
	/*printf("%p",p);
	printf("\n");
	printf("%d",*p);
	printf("\n");*/
	for(counter= 0; counter < 5; counter++)
	{
		a[counter] = counter+1;
		//printf("%d",a[counter]);
	}
	for(counter = 0; counter < 5;counter++)
	{
		printf("%d\n",*(p+counter));

	}
}