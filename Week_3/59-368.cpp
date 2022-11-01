//Kavya has seen one brochure ...
//pg 59 / 368 ...
#include<stdio.h>
int firstdigi(long);
int lastdigi(long);
int main()
{
	long phone,first,last,sum;
	printf("Enter phone number:");
	scanf("%d",&phone);
	first=firstdigi(phone);
	last=lastdigi(phone);
	sum=first+last;
	printf("The sum of first 2 digits and last 2 digits of phone number is: %d ",sum);
}
int firstdigi(long a)
{
	int b,c,sum;
	a/=100000000; //12
	b=a/10; //1
	c=a%10; // 2 
	sum=b+c;
	printf("Sum of first 2 digits: %d\n",sum);
	return sum;
}
int lastdigi(long a)
{
	int b,c,sum;
	a%=100; //89
	b=a/10; //8
	c=a%10; //9 
	sum=b+c;
	printf("Sum of first 2 digits: %d\n",sum);
	return sum;
}
