//Latha is learning about....
//pg 6 / 368
#include<stdio.h>
#include<math.h>
int main()
{
	int deg;
	float rad,ans;
	printf("Enter the value to calculate the tan x degree value \n");
	scanf("%d",&deg);
	rad=(3.14/180)*deg; //
	printf("Degree >> Radians /n %d >> %f \n\n",deg,rad);
	ans=tan(rad);
	printf("The value of tan %d degrees is: %f",deg,ans);
	return 0;
}
