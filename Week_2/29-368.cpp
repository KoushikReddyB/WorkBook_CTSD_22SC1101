//Alice wants to send a secret...
//pg 29 / 368 ...
#include<stdio.h>
int main()
{
	char msg[50];
	int i;
	printf("Enter Message \n");
	gets(msg);
	for(i=0;i<50&&msg[i]!='\0';i++)
	{
		msg[i]=msg[i]+1;
	}
	printf("The Secret is: %s",msg);
	return 0;
}
