#include<stdio.h>
int main()
{
	char str[20],s[20];
	int i,k;
	printf("enter a string");
	scanf("%s",str);
	for(i=0,k=0;str[i]!='\0';i++)
	{
		if(str[i]=='.')
		{
		  s[k]='[';
		  k++;
		  s[k]='.';
		  k++;
		  s[k]=']';
		  k++;
	    }
		else
		{
		    s[k]=str[i];
		    k++;
	    }
	    s[k]='\0';
	}
	 printf("%s",s);
	return 0;
}
