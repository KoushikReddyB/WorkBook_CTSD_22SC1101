/*Two children, Lily and Ron, want to share a chocolate bar...
pg 237 / 368 ...*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of squares in the chocolate: ");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the numbers: ")
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int d,m;
	printf("Enter Ron's birth date(d) and month(m): ")
	scanf("%d%d",&d,&m);
	int count=0,j,sum,x;
	for(i=0;i<n;i++)
	{
		x=1;
		sum=0;
		j=i;
		while(x<=m)
		{
			sum=sum+a[j];
			j++;
			x++;
		}
		if(sum==d)
		 count++;
	}
	printf("The number of ways we can divide chocolate are: %d",count);
	return 0;	
}
