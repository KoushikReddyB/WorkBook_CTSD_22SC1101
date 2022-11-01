//For every x, try xY where ...
//pg 136 / 368 ...
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,i;
	long long power=1;
	printf("Enter base and exponent:\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
	power=power*x;
	}
	printf("%d ^ %d = %lld",x,y,power);
	return 0;
}
