//Sony is writting tables by ...
//pg 145 / 368 ...
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a integer:");
	scanf("%d",&n);
	for(i=1;i<=10;++i)
	{
		if(i!=n)
		{
			printf("%d * %d = %d\n",n,i,n*i);
		}
	}
	return 0;
}
