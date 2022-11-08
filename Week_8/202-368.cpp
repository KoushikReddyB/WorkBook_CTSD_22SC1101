/* You are given a 0-indexed string ...
pg 202 / 368 ... */
#include<stdio.h>
#include<string.h>
int replace(char *s)
{
	int charlen,i;
	charlen=strlen(s);
	for(i=1;i<charlen;i+=2)	
	{
		s[i]=s[i-1]+(s[i]-'0');
	}
	return *s;
}
int main()
{
	char s[100];
	printf("Enter the string: ");
	gets(s);
	replace(s);
	printf("The replaced digits are: ");
	puts(s);
	return 0;
}
