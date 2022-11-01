/* Two kids are playing with each other ....
pg 181 / 368 ... */
#include<stdio.h>
int rec(int x);
int main()
{
	int n,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	count=rec(n);
	printf("The number of digits of %d is %d",n,count);
	return 0;
}
int rec(int x)
{
	static int count=0;
	if(x>0)
	{
		count++;
		rec(x/10);
	}
	else
	return count;
}
