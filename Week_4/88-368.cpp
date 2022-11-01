//Kuldeep Yadev is a well known...
//pg 88 / 368 ...
#include<stdio.h>
int main()
{
	int a[5],i,large,small;
	FILE *ptr;
	ptr=fopen("kuldeep.txt","w");
	printf("Enter values to save to a file:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		fprintf(ptr,"%d ",a[i]);
	}
	ptr=fopen("kuldeep.txt","r");
	large=small=a[0];
	for(i=1;i<5;++i)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
	}
	printf("%d %d\nOpen file named 'kuldeep.txt'",small,large);
	ptr=fopen("kuldeep.txt","w");
	fprintf(ptr,"\nThe maximum score is %d\nThe minium score is %d",large,small);
	fclose(ptr);
	return 0;
}
