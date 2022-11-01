//Prithiv went to GYM and his trainer...
//pg 94 / 368 ...
#include<stdio.h>
#include<math.h>
int main()
{
	float w,h,w2,h2,bmi;
	printf("Enter your height and weight:\n");
	scanf("%f%f",&h,&w);
	w2=w*0.45359;
	h2=h/100;
	bmi=w/(h2*h2);
	printf("your height is %f and weight is %f\nYour BMI is %f\n",h2,w2,bmi);
	if(bmi<18.5)
	printf("Underweight");
	else if(bmi<=18.5&&bmi>=25)
	printf("Normal");
	else if(bmi<25&&bmi>=30)
	printf("Overweight");
	else if(bmi>30)
	printf("Obese");
	else
	printf("Interpretation");
	return 0;
}
