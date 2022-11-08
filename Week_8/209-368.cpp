/* Julius Caesar protected his confidential information ...
pg 209 / 368 ... */
#include<stdio.h>
#include<string.h>
int encrypt(char *str,int s)
{
	char result[100],text[100];
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		result += char(text[i] + s - 97) % 26 + 97); // adding s chars , for chars after 'z' we use %26+97 to begin shifting from 'a'
	}
	return *result;
}
int main()
{
	char str[100];
	int shift;
	printf("Enter the number of shifts >> ");
	scanf("%d",&shift);
	printf("Enter the string >> ");
	gets(str);
	strlwr(str);
	printf("your inputed text >> ");
	puts(str);
	encrypt(str,shift);
	printf("Your encrypted text >> ");
	puts(str);
	return 0;
}
