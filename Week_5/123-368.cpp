//There are n number of students in a ...
//pg 123 / 368...
#include<stdio.h>
int main()
{
	int a[50],i,n,large,small,difference;
	printf("Enter the total number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
	}
	difference=large-small;
	printf("The Difference is %d",difference);
	return 0;
}
