/*Recursive Digit Sum ...
pg 174 / 368 ... */
#include<stdio.h>
int rec(int);
int main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=rec(n);
	printf("Sum of digits is %d",result);
	return 0;
}
int rec(int n)
{
	if(n==0)
	return 0;
	return (n%10+rec(n/10));
}
