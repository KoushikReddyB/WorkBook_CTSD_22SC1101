/*There is a collection of rocks where each ...
pg 221 / 368 ...*/
#include<stdio.h>
int main()
    {
    int n,i,j,freq[150][27]={0},count;
    char str[200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%s\n",str);
        for(j=0;str[j]!='\0';j++)
            {
            freq[i][str[j]-97]++;
        }   
    }
    count=0;
    for(i=0;i<26;i++)
        {
        for(j=0;j<n;j++)
            if(freq[j][i]>0)
            continue;
            else
            break;
            if(j==n)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
