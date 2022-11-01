//Chef has A units of ...
// pg 116 / 368 ...
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the units of solid and liquid:\n");
	scanf("%d%d",&a,&b);
	if(a==0)
	{
		printf("Liquid");
	}
	else if(b==0)
	{
		printf("Solid");
	}
	else
	{
		printf("Solution");
	}
	return 0;
}
