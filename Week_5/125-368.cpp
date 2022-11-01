//Ram, a math professor loves ...
//pg 125 / 368 .... 
#include<stdio.h>
int main()
{
	int x,y,quotient,reminder;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	quotient=x/y;
	reminder=x%y;
	printf("Quotient=%d\nReminder=%d",quotient,reminder);
	return 0;
}
