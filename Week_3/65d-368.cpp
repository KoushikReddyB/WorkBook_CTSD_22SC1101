// What is a storage ....
// pg 65 / 368 ...
#include<stdio.h>
int staticDemo()
{
	static int i;
	{
		static int j=1;
		printf("%d\n",j);
		j=j+1;
	}
	printf("%d\n",i);
	i=i+1;
}
int main()
{
	staticDemo();
	staticDemo();
}
