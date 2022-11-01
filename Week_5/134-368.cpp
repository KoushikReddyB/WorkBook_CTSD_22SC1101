//Let a number x containing n digits...
//pg 134 / 368 ...
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+pow(r,3);
		n=n/10;
	}
	if(temp==sum)
	printf("The number is Armstrong number");
	else
	printf("The number is not a Armstrong number");
	return 0;
}
