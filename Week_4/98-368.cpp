//Ravi is very at ....
//pg 98 / 368 ... 
#include<stdio.h>
int main()
{
	int a[4],i,count=0;
	printf("Enter 4 elements \n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		(a[i]%2!=0) ? count++ : printf("");
	}
	printf("Number of Odd numbers in array is: %d ",count);
	return 0;
}
