/*Srujan ask his son Arun to calculate...
pg 166 / 368 ...*/
#include<stdio.h>
int rec(int a)
{
	if(a!=0)
	return a+rec(a-1);
	else
	return a;
	
}
int main()
{
	int n,sum;
	printf("Enter the number\n");
	scanf("%d",&n);
	sum=rec(n);
	printf("The sum of %d is: %d",n,sum);
	return 0;
}
