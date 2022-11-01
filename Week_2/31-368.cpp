//Mark, Bob and Jack are bidding ...
// Pg 31 / 368 ...
#include<stdio.h>
int main()
{
	int mark,bob,jack;
	printf("Enter Mark's Bid \n");
	scanf("%d",&mark);
	printf("Enter Bob's Bid \n");
	scanf("%d",&bob);
	printf("Enter Jack's Bid \n");
	scanf("%d",&jack);
	printf("\n\n");
	if(mark>bob&&mark>jack)
	printf("==>Mark wins the auction \n");
	else if(bob>mark&&bob>jack)
	printf("==>Bob wins the auction \n");
	else
	printf("==>Jack wins the auction \n");
	return 0;
}

