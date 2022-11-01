//Kiran is a clever student in...
//pg 68e / 368...
#include<stdio.h>
void sum()
{
	static int a=10;
	static int b=24;
	printf("%d%d\n",a,b);
	a+=1;
	b+=1;
}
int main()
{
	int i;
	sum();
	sum();
	sum();
}
