//Sheila wants to engage...
//pg 27 / 368...
#include<stdio.h>
int main()
{
	int ball1,ball2,ball3=0,temp,*a,*b,*c;
	printf("Enter the ball1 and ball2 \n");
	scanf("%d%d",&ball1,&ball2);
	printf("Peg A=%d\tPeg B=%d\tPeg C=%d\n\n",ball1,ball2,ball3);
	a=&ball1;
	b=&ball2;
	c=&ball3;
	*c=temp;
	*c=*b;
	*b=*a;
	*a=temp;
	printf("The Swapped Numbers are %d - %d - %d \n\n",*a,*b,*c);
	printf("Peg A=%d \tPeg B=%d \tPeg C=%d\n",*a,*b,*c);
	return 0;
}
