/* For an interview, the candidates are waiting ...
pg 241 / 368 ... 
NOTE: This program is also known as "Linear Search"*/
#include<stdio.h>
int main()
{
	int a[10],key,n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter values for array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search value: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]>=key)
		{
			break;
		}
	}
	printf("Present in %d position in list\n",i+1);
	return 0;
}
