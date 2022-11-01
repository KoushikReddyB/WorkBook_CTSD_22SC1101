//predict the output...
// pg 35 / 368 -- ... b
#include<stdio.h>
int main()
{
	int *ptr;
	int x;
	ptr=&x;
	*ptr=0;
	printf("x=%d\n",x); 
	printf("*prt=%d\n",*ptr); 
	*ptr+=5; 
	printf("x=%d\n",x);
	printf("*prt=%d\n",*ptr);
	(*ptr)++;
	printf("x=%d\n",x);
	printf("*prt=%d\n",*ptr);
	return 0;
}
