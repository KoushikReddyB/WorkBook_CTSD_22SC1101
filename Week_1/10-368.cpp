//A participant can make 1...
//pg 10 / 368
#include<stdio.h>
int main()
{
	int min,sec,suc;
	printf("Enter Minutes \n");
	scanf("%d",&min);
	sec=min*60;
	sec=sec-5;
	suc=sec/30;
	printf("The total sucessful submissions done in %d minutes are:  %d",min,suc);
	return 0;
}
