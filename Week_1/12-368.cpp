//There is a group of N friends...
//pg 12 / 368...
#include<stdio.h>
int main()
{
	int n,m,k,reg;
	printf("enter the strenght of the group of n friends \n");
	scanf("%d",&n);
	printf("Enter the max capacity of the students that register for it \n");
	scanf("%d",&m);
	printf("Enter the strenght of students who already enrolled the course \n");
	scanf("%d",&k);
	reg=m-k;
	if(reg>=n)
	printf("Can register in same class");
	else
	printf("Not possible...");
	return 0;	
}
