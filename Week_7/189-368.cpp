/* Write a program to find wheater a given ...
pg 189 / 368 ... */
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		fact=fact+1;
	}
	if(fact==2)
	printf("yes");
	else
	printf("no");
	return 0;
}
