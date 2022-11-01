//Alice was trying to analyze if ...
//pg 103 / 368 ...
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number \n");
	scanf("%d",&x);
	if(x%2==0)
	{
		if(x%4==0)
		{
			printf("Number %d is divisible by 4\n",x);
		}
		else
		{
			printf("The number %d is not divisible by 4",x);
		}
	}
	else
	{
		if(x%3==0)
		{
			printf("Number %d is divisible by 3\n",x);
		}
		else
		{
			printf("The number %d is not divisible by 3",x);
		}
	}
	return 0;
}
