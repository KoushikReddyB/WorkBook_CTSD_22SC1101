/* Given a string str, a character and a positive ...
pg 213 / 368 ... */
#include<stdio.h>
#include<string.h>
int countChar(char str[], char x,int n)
{
    int count=0,i,len,repetitions;
    len=strlen(str);
    for(i=0;i<len;i++)
	{
        if (str[i]==x)
            count++;
	}
    repetitions=n/len;
    count=count*repetitions;
    for(i=0;i<n%len; i++)
	{
        if (str[i]==x)
            count++;
    }
    return count;
}
int main()
{
	char str[100],n,num;
	printf("Enter the string >> ");
	gets(str);
	printf("Enter a character >> ");
	scanf("%c",&n);
	printf("Enter a positive integer >> ");
	scanf("%d",&num);
	int count=countChar(str,n,num);
	printf("The count is : %d",count);    
    return 0;
}
