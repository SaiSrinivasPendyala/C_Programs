#include <stdio.h>
int main()
{
	unsigned int test,i;
	char *p;
	p = (char *)&test;
	scanf("%d",&test);
	for(i=0;i<4;i++)
	{
		printf("%d \n",p[i]);
	}
	
}