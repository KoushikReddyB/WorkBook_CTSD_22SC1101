/* Noddy was driving his car very ...
pg 204 / 368 */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int vowel=0,i;
	printf("Input String >> ");
	gets(str);
	strlwr(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vowel++;
		}
	}
	if(vowel!=0)
	{
		printf("The string contains Vowels");
	}
	else
	{
		printf("The string doesn\'t contain vowels");
	}
	return 0;
}
