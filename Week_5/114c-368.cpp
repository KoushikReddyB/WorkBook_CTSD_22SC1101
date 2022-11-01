//predit the output ...
//pg 114c / 368 ...
#include<stdio.h>
int main()
{
	int i=-3,j=2,k=0,m;
	m=++i&&++j||++k;
	printf("i=%d, j=%d, k=%d, m=%d\n",i,j,k,m);
	return 0;
}
