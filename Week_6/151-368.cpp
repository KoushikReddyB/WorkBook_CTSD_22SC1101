//Anjani's favorite subject in Btech is ...
//pg 151 / 368 ...
#include<stdio.h>
int main()
{
	int a[10],i,res=0;
	printf("Enter the resistors:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		res+=a[i];
	}
	printf("The Total Resistance is %d",res);
	return 0;
}
