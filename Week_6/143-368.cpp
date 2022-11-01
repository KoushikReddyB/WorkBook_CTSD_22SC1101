//Hari wants to construct ...
//pg 143 / 368 ...
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter row size:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
