//Consider a closed circuit contains...
// pg 82 / 368 ...
#include<stdio.h>
int main()
{
	int a[10],i,sum,avg;
	FILE *fp;
	fp=fopen("D:\\KLU\\CTDS\\Work book 1st ODD\\res_input.txt","r");
	for(i=0;i<5;i++)
	{
	fscanf(fp,"%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	sum+=a[i];
	}
	avg=sum/10;
	printf("%d %d",sum,avg);
	printf("\n");
	fp=fopen("D:\\KLU\\CTDS\\Work book 1st ODD\\res.txt","w");
	fprintf(fp,"SUM:%d\nAvg:%d",sum,avg); //used to write into the file
	fclose(fp); //to close the file
	return 0;
}
