//Anshu moved to a new house in Vijayawda...
//pg 16 / 368 ...
#include<stdio.h>
int main()
{
	float m,g,h,pe;
	printf("Enter the mass of the box in pounds \n");
	scanf("%f",&m);
	printf("Enter the potential energy of the box \n");
	scanf("%f",&pe);
	m=m*0.453;
	g=9.8;
	h=pe/(m*g);
	printf("The height of the self is %f",h);
	return 0;
}
