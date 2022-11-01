//Mr. X has been asked to ...
// pg 48 / 368 ...
#include<stdio.h>
int main()
{
	int inp;
	char A='A',oup;
	printf("Enter 0 or 1\n");
	scanf("%d",&inp);
	if(inp==0||inp==1)
	{
		if(inp==0)
		{
			oup=(A+32);
			printf("OUTPUT: %c \n",oup);			
		}
		else
		{
			oup=(A+33);
			printf("OUTPUT: %c \n",oup);	
		}
	}
	else
	printf("Enter correct value");
	return 0;
}
