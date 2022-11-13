/* Given two arrays arr1 and arr2, the elements of arr2 are distint, and all elements ...
pg 235 / 368 ... 
NOTE: This Program is also known as "Relative sort Array"*/

#include<stdio.h>
int main()
{
	int count[1001]={0};
	int arr1[1001],arr2[1001];
	int n,m,i;
	printf("enter n value: ");
	scanf("%d",&n);
	printf("enter values for arr1 array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter m value: ");
	scanf("%d",&m);
	printf("enter values arr2: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for (i=0;i<n;i++)
    {
        count[arr1[i]]++;
    }

        int index = 0, ans[n] ;
        for (i=0;i<m;i++)
		{
            while (count[arr2[i]]-- > 0) 
			{
                ans[index++] = arr2[i];
            }
        }
        for ( i = 0; i < 1001; i++)
		{
            while (count[i]-- > 0)
			{
                ans[index++] = i;
            }
        }
        for(i=0;i<n;i++)
         printf("\n%d",ans[i]);
        return 0;
}
