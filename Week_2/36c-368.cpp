//predict the output...
// pg 36 / 368 -- ... c
#include<stdio.h>
int main()
{
	int N=4;
	int *ptr,*ptr2;
	ptr=&N;
	ptr2=&N;
	printf("The ptr2 before addition is: \n");
	printf("%p \n",ptr2);
	ptr2=ptr2+3;
	printf("The ptr2 after addition is: \n");
	printf("%p \n",ptr2);
	return 0;
}
