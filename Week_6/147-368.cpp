//Given a base-10 integer...
//pg 147 / 368 ...
#include<stdio.h>
int main()
{
	int i=0,n,r,b[1000];
	printf("Enter number:");
	scanf("%d",&n);
	printf("\nThe Binary number of %d = ",n);
	while(n>0)
	{
		b[i]=n%2;
		n=n/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
	return 0;
}
