//John has just started programming ...
// pg 46 / 368 ... 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a and b\n");
	scanf("%d%d",&a,&b);
	if(a==b)
		printf("First and Second one are equal");
	else
		(a>b ? printf("First one is greater than the second") : printf("Second one is greater than the first one"));
	return 0;
}
