/* Danny has a possible list of passwords of Manny's facebook ...
pg 206 / 368 ... */
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("Enter number of passwords >> ");
	scanf("%d",&n);
	char s[n][100];
	int i,j,length,p1,p2;
	char ch;
	printf("Enter passwords >> ");
	for(i=0;i<n;i++)
	{
		printf("\n");
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{ 
		    if(strcmp(s[i],strrev(s[j]))==0)
		    {
		    	p1=i;
		    	p2=j;
		    	break;
			}
		}
	}
	length=strlen(s[p1]);
	ch=s[p1][length/2];
	printf("\nThe password lenght is %d\nThe middle character is %c",length,ch);
	return 0;
}

