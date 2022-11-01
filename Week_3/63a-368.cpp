//Predict the output for ...
// pg 63a / 368 ... 
#include<stdio.h>
int d()
{
	int a;
	a=30;
	printf("%d",a);
}
int f()
{
	int a;
	d();
	printf("%d",a);
}
int main()
{
	int a;
	a=10;
	printf("%d",a);
	f();
	return 0;
}
