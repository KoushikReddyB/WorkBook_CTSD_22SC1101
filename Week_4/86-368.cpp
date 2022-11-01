//Krishna is playing with his  ....
//pg 86 / 368 ... 
#include<stdio.h>
int main()
{
	int a,b,ans,n;
	printf("\tMATHEMATICAL CALCULATOR ( in C )\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n\n Please Enter your choise:");
	scanf("%d",&n);
	printf("Enter Value of A and B \n");
	scanf("%d%d",&a,&b);
	switch(n)
	{
		case 1:
			{
				ans=a+b;
				printf("The Sum of the %d and %d is %d",a,b,ans);
				break;
			}
		case 2:
			{
				ans=a-b;
				printf("The difference of the %d and %d is %d",a,b,ans);
				break;
			}
		case 3:
			{
				ans=a*b;
				printf("The Product of the %d and %d is %d",a,b,ans);
				break;
			}
		case 4:
			{
				ans=a/b;
				printf("The difference of the %d and %d is %d",a,b,ans);
				break;
			}
		default:
			printf("Please enter a valid option :(");
			break;
	}
	return 0;
}
