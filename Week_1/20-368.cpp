//A painter wants to paint....
//pg 20 / 368 ...
#include<stdio.h>
int main()
{
	int l,b,h,area,price;
	printf("Enter the Lenght, Breadth and Height \n");
	scanf("%d%d%d",&l,&b,&h);
	area=2*((l*b)+(b*h)+(h*l));
	printf("The total area is %d cm^2 \n",area);
	price=(area*5);
	price=price/100;
	printf("The Cost of the painting is %d",price);
	return 0;
}
