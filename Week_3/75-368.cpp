//Most programmers will tell ...
// pg 75 / 368 ... 
#include<stdio.h>
int target()
{
	int a[4],c=0,i;
	printf("Enter array elements \n");
	for(i=1;i<=4;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=4;i++)
	c+=a[i];
	printf("Total Sum is:%d",c);
}
int main()
{
	target();
	return 0;
}
