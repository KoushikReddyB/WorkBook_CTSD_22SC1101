//Akhil took two pointers ...
//pg 40 / 368
#include<stdio.h>
int main()
{
	char str[50],*start,*end,temp;
	int len,i;
	printf("Enter the String\n");
	scanf("%s",&str);
	i=0;
	while(*(str+i)!='\0')
	i++;
	len=i;
	start=str;
	end=str;
	for(i=0;i<len-1;i++)
	end++;
	for(i=0;i<len/2;i++)
	{
		temp=*end;
		*end=*start;
		*start=temp;
		start++;
		end--;
	}
	printf("The Reversed String is %s",str);
	return 0;
}
