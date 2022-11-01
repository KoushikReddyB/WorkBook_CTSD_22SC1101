//Ravi's livelihood depends on selling grosaries...
//pg 14 / 368 ...
#include<stdio.h>
int main()
{
	float left,lit,p;
	printf("Enter oil in gallons \n");
	scanf("%f",&p);
	lit=p*3.785;
	printf("GALLONS >> LIT \n %f >> %f \n",p,lit);
	left=lit-(2*50);
	printf("the oil left with him is %f",left);
	return 0;
}
