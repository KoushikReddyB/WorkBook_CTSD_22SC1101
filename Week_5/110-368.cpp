//The Fibonacci numbers, commonly denoted ....
//pg 110 / 368 ...
#include<stdio.h>
int main()
{
	int f0=0,f1=1,f2=f0+f1,n,i;
	printf("Enter the nth term for the Fibonacci series:");
	scanf("%d",&n);
	printf("The Fibnonacci sequence is: \n 0\t1\t");
	for(i=3;i<=n;i++)
	{
		printf("%d\t",f2);
		f0=f1;
		f1=f2;
		f2=f0+f1;
	}
	return 0;
}
