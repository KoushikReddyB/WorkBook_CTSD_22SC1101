//Anju takes a loan of Rs. 7,00,000....
//pg 51 / 368 ...
#include<stdio.h>
float Simple_Intrest(float p,float t,float r);
int main()
{
	float p,t,r,intrest,amt;
	printf("Enter the Amount, Time and Rate \n");
	scanf("%f%f%f",&p,&t,&r);
	intrest=Simple_Intrest(p,t,r);
	amt=intrest+p;
	printf("The Total Amount to be paid is %f",amt);
	return 0;
}
float Simple_Intrest(float a,float b,float c)
{
	float value;
	value=(a*b*c)/100;
	return value;
}
