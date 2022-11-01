//On the eve of Diwali,...
//pg 141 / 368 ...
#include<stdio.h>
int power(int k)
{
	int i,j,ans=1;
	for(i=1;i<=k;i++)
	{
		ans=(ans*2)%100000;
	}
	return ans;
}
int main()
{
	int i,j,n;
	printf("Enter number of bulbs:");
	scanf("%d",&n);
	printf("%d\n",power(n)-1);
	return 0;
}
