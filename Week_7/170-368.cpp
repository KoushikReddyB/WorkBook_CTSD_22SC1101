/* The following example calculates .... 
pg 170 / 368 ... */
#include<stdio.h>
int rec(int a)
{
	return (a==1) ? 1 : a*rec(a-1);
}
int main()
{
	int n,fact;
	printf("enter a number:");
	scanf("%d",&n);
	fact=rec(n);
	printf("Output: %d",fact);
}
