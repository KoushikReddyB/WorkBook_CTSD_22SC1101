/*Arun's programming tutor challenged him to discover the ....
pg 168 / 368 ... */
#include<stdio.h>
int rec(int a,int b)
{
	int result=1;
	if(b!=0)
	return a*rec(a,b-1);
	else
	return result;
}
int main()
{
	int number,power,ans;
	printf("Enter the base and the exponent\n");
	scanf("%d%d",&number,&power);
	ans=rec(number,power);
	printf("Answer is: %d",ans);
	return 0;
}
