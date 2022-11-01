//Mothi's Computer teacher taught ...
//pg 159 / 368 ...
#include<stdio.h>
int range(int left, int right)
{
    int shifts=0;
    while(left!=right) 
	{
            left>>=1;
            right>>=1;
            shifts++;
    }
    	return left << shifts;
}
int main()
{
	int a,b,ans;
	printf("Enter 2 values\n");
	scanf("%d%d",&a,&b);
	ans=range(a,b);
	printf("\nans=%d",ans);
	return 0;
}
