//WAP to obtain 2 numbers ( A and B )
//pg 44 / 368 ...
#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("Enter the symbol of operation \n");
	scanf("%c",&c);
	if(c=='+'||c=='-'||c=='*'||c=='/')
	{
		if(c=='+')
		{
			printf("Enter the values of a and b \n");
			scanf("%d%d",&a,&b);
			printf("Your choise is ADDITION of 2 numbers \n");
			ans=a+b;
			printf("your sum is: %d",ans);
		}
		if(c=='-')
		{
			printf("Enter the values of a and b \n");
			scanf("%d%d",&a,&b);			
			printf("Your choise is SUBTRACTION of 2 numbers \n");
			ans=a-b;
			printf("your difference is: %d",ans);
		}
		if(c=='*')
		{
			printf("Enter the values of a and b \n");
			scanf("%d%d",&a,&b);
			printf("Your choise is MULTIPLICATION of 2 numbers \n");
			ans=a*b;
			printf("your product is: %d",ans);
		}
		if(c=='/')
		{
			printf("Enter the values of a and b \n");
			scanf("%d%d",&a,&b);
			printf("Your choise is DIVISION of 2 numbers \n");
			ans=a/b;
			printf("your division value is: %d",ans);
		}
	}
	else
		{
			printf("Please check your option\nPlease note that you entered the respective symbol of the operation");
		}
	return 0;
}
