//Ram is poor at ...
//pg 67d / 368...
#include<stdio.h>
int main()
{
	register int n;
	n=20;
	int *ptr;
	ptr=&n;
	printf("address of n:%u",ptr);
	return 0;
}
