/*Write a C program for converstion of...
pg 176 / 368 ... */
#include<stdio.h>
int rec(int);
int main()
{
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=rec(n);
	printf("The Binary Number of %d is %d",n,result);
	return 0;
}
int rec(int a)
{
	if(a==0)
	return 0;
	else
	return (a%2 + 10*rec(a/2));
}
