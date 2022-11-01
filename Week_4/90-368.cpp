//Chef appeared for an ...
// pg 90 / 368 ... 
#include<stdio.h>
int main()
{
	int a,b,c,total;
	printf("Enter Marks of Section A , Section B , Section C ( max 100 )\n");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	if(a>=10&&b>=10&&c>=10)
	{
		if(total>=100)
		{
			printf("PASS");
		}
	}
	else
		{
			printf("FAILED");
		}
	return 0;
}
