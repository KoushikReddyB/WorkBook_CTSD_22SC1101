//Assume a hall with the capacity ...
//pg 42 / 368 ...
#include<stdio.h>
int main()
{
	int arr[30],i,n,count=0,fill=1,empty=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("The array is:  ");
	for(i=0;i<10;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]==fill)
		{
			count++;
		}
	}
	printf("The filled seats are: %d\n",count);
	count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==empty)
		{
			count++;
		}
	}
	printf("The empty seats are: %d\n",count);
	return 0;
}
