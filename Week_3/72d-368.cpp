//Samuel has a constest,...
//pg 72d / 368 ...
#include<stdio.h>
int a,b,c=0;
void ptrfun(void);
int main()
{
	static int a=2;
	ptrfun();
	a=a+1;
	ptrfun();
	printf("\n%d%d",a,b);
}
void ptrfun(void)
{
	static int a=4;
	int b=4;
	a=a+b;
	printf("\n%d%d",a,b);
}
