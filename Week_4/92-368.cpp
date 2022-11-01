//Chef's coding class is ... 
//pg 92 / 368 ... 
#include<stdio.h>
int main()
{
	int x,y,chairs;
	printf("Count of New Students joined \n");
	scanf("%d",&x);
	printf("Enter available chairs in class \n");
	scanf("%d",&y);
	chairs=x-y;
	if(chairs>0)
	{
		printf("New chairs to be bought = %d chairs 'More'",chairs);
	}
		else
		printf("Not required\n");
}

