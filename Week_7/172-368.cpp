#include<stdio.h>
int fibo(int);
int main()
{
	int num,result;
	printf("Enter the nth term of fibonacci number:");
	scanf("%d",&num);
	result=rec(num);
	printf("The Sum is: %d",result);
	return 0;
}
int rec(int a)
{
	if(a==0)
	return 0;
	if(a==1)
	return 1;
	return rec(a-1)+rec(a-2); 
}
