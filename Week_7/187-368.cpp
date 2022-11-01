/* Implement pow(x,k) The program...
pg 187 / 368 */
#include<stdio.h>
int main()
{
	int t;	
	printf("Enter number of test cases:");
	scanf("%d",t);
	while(t!=0)
	{
		int a,b,i;
		long long power=1;
		printf("Enter base and exponent\n");
		scanf("%d%d",&a,&b);
		for(i=0;i<b;i++)
		power*=a;
		printf("%lld\n",power);
		t--;
	}
	return 0;
}
