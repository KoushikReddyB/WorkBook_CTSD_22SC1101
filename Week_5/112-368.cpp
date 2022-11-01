//Ravi likes printing tables...
//pg 112 / 368 ...
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;	
}
