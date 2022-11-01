//Mr. Ravi has prepared...
//pg 53 / 368..
#include<stdio.h>
int main()
{
	int a[50],i,large,small;
	printf("Input the array elements :\n");
	for(i=0;i<3;++i)
	scanf("%d",&a[i]);
	large=small=a[0];
	for(i=1;i<3;++i)
	{
	if(a[i]>large)
	large=a[i];
	if(a[i]<small)
	small=a[i];
	}
	printf("The smallest element of array:%d \n",small);
	printf("The large element of array:%d \n",large);
	return 0;
}
