//Implement pow(x,n), which ...
//pg 161 / 368 ...
#include<stdio.h>
int pow(int x,int y);
int main()
{
	int a,b,ans;
	printf("Enter base and exponent\n");
	scanf("%d%d",&a,&b);
	ans=pow(a,b);
	printf("%d",ans);
	return 0;
}
int pow(int x,int y)
{
	int power=1,i;
	for(i=0;i<y;i++)
	{
		power*=x;
	}
	return power;
}
