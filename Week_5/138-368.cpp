//Given a number N , check if...
//pg 138 / 368 ...
#include<stdio.h>
int main()
{
	int n,r,sum=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%i;
		if(r==0)
		{
		sum+=i;
		}
	}
	if(n==sum)
	printf("The number is Perfect Number");
	else
	printf("The number is not a Perfect Number");
	return 0;
}
