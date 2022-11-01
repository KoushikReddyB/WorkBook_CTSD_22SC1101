//Six friends go on a trip...
//pg 55 / 368 ...
#include<stdio.h>
int max(int x,int y);
int main()
{
	int x,y;
	printf("Enter the values of x and y\n");
	scanf("%d%d",&x,&y);
	max(x,y);
	return 0;
}
int max(int x,int y)
{
	int a,b;
	a=3*x;
	b=2*y;
	if(a<b)
	printf("Minium amount they need to pay is %d",a);
	else
	printf("The minium amount they need to pay is %d",b);
	return 0;
}
