/* You are given a string s consisting of lowercase English ... 
pg 219 / 368 .. */
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],a[]={'a','e','i','o','u'};
	gets(s);
	int i,ans=1,len,arr[26]={0};
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		arr[s[i]-'a']=1;
		else if(s[i]=='_');
		{
			int c=0;
			for(int j=0;j<5;j++)
			if(arr[a[j]-'a']==1)
			c++;
			ans*=c;
		}
	}	
	printf("answer = %d\n",ans);
	return 0;
}
