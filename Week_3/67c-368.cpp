//Predict the output...
//pg 67c / 368...
#include<stdio.h>
int bomb();
int p;
int sum=5;
int main()
{
	printf("%d%d",sum,p);
	return 0;
}
int bomb()
{
	sum+=1;
	return sum;
}
