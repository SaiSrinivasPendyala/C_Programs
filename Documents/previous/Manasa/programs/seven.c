#include <stdio.h>
int main()
{
	int x,y,i,sum = 0;
	scanf("%d  %d",&x,&y);
	while(y>x)
	{
		for(i=x;i<=y;i++)
		{
			if(i%7==0)
			{
				sum = sum+i;
			}
		}
	}
	printf("%d\n",sum);

}