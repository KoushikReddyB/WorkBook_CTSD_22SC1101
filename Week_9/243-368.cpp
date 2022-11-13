/* Our friend Monk has an exam that has ...
pg 243 / 368 ... */
#include<stdio.h>
int main()
{
	int n,t;
	printf("Enter number of questions and maximum difficulty: ");
	scanf("%d%d",&n,&t);
	int a[n],i;
	printf("Enter the difficutly of each question: \n")
	for(i=0;i<n;i++)
	{
		printf("Question %d difficulty: \n",i+1);
		scanf("%d",&a[i]);
	}
	int count=0,skip=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=t && skip!=2)
		 count++;
		else if(a[i]>t && skip!=2)
		 skip++;
	}
	printf("Maximum score is: %d",count);
	return 0;
}

