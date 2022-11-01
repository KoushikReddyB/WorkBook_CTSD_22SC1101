/* You have been given a string S ...
pg 191 / 368 ... */
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40],str2[40];
	int diff=0;
	printf("Enter a string:");
	scanf("%s",&str1);
	strcpy(str2,str1);
	diff=strcmp(strrev(str2),str1);
	if(diff==0)
	printf("YES");
	else
	printf("NO");
	return 0;
}
