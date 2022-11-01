//Jack is a talkative student in the ...
//pg 153 / 368 ...
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("The elements before swap is %d - %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The elements after swap is %d - %d",a,b);
	return 0;
}
