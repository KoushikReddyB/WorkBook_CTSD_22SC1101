/* Given a string s consisting of words ...
pg 194 / 365 ... */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,ans=0;
	printf("Enter a string:");
	gets(str);
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==' ')
		break;
		else
	printf("The lenght of last word of the string is %d",ans);
	return 0;
}
