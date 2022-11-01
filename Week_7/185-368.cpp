/* Krishna is very fond of natural ...
pg 185 / 368 ... */
#include<stdio.h>
int rec(int);
int main()
{
	int x;
	printf("Enter any number:");
	scanf("%d",&x);
	rec(x);
	return 0;
}
int rec(int n)
{
	if(n!=0)
	{
		printf("%d\t",n);
		rec(n-1);
	}
	else
	return 0;
}
