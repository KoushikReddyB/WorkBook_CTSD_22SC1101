/* Given a string s consisting of words ...
pg 194 / 365 ... */
#include<stdio.h>
#include<string.h>
int main()
{
	char string[30];
	int i,ans=0;
	printf("Enter a string:");
	gets(string);
	for(i=strlen(string)-1;i>=0;i--)
	{
		if(string[i]==' ')
		break;
		else
		ans++;
	}
	printf("The lenght of last word of the string is %d",ans);
	return 0;
}
