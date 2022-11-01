//Raghu found a new Instagram page related to ...
// pg 61 / 368 ..
#include<stdio.h>
int parr(int *);
int main()
{
	int a[50],i,fn;
	printf("Enter elements \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	fn=parr(&a[0]);
	return 0;
}
int parr(int *p)
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("%d \t",*(p+i));
	}
	return 0;	
}
