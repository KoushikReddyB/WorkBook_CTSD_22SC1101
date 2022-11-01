//predit the output ...
//pg 72e / 368 ...
#include<stdio.h>
int main()
{
	register int i=2;
	static char ch='A';
	auto float j;
	int k;
	printf("%d %c %f %d \n",i,ch,j,k);
	k=++ch&&i;
	printf("%d\n",k);
	k=++ch;
	printf("%d\n",k);
	j=(i--)+(++k)*2;
	printf("%d %f\n",k,j);
}
