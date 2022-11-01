/* In mathematics, finding the GCD ...
pg 183 / 368 ... */
#include<stdio.h>
int hcf(int,int);
int main()
{
	int x,y,gcd;
	printf("enter 2 numbers\n");
	scanf("%d%d",&x,&y);
	gcd=hcf(x,y);
	printf("The GCD of %d and %d is : %d ",x,y,gcd);
	return 0;
}
int hcf(int a,int b)
{
	if(b!=0)
	return hcf(b,a%b);
	else
	return a;
}
