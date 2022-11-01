//It's the sale season and Raghu bought ...
// pg 100 / 368 ...
#include<stdio.h>
int main()
{
	int x,discount,price;
	printf("Enter the amount you purchaced \n");
	scanf("%d",&x);
	if(x>5000)
	price=x-500;
	else if(x>1000&&x<=5000)
	price=x-100;
	else if(x>100&&x<=1000)
	price=x-25;
	else if(x<=100)
	price=x-0;
	printf("Total Price is= %d \nDiscounted price is= %d",x,price);
	return 0;
}
