//Gopal likes problem solving....
//pg 4 / 368
#include<stdio.h>
int main()
{
	int n,total,p,min;
	printf("Enter the last day of the month (28-31 only) \n");
	scanf("%d",&n);
	total=n*n;
	printf("Enter number of problems done by gopal in %d day is %d\n",n,total);
	printf("Enter the mins it takes per problem \n");
	scanf("%d",&min);
	p=(min*total)/60;
	printf("The number of hrs you spend on solving problem in %d days is: %d hrs \n",n,p);
	return 0;	
}
