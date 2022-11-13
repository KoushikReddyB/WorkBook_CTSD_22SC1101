/* Louise Joined a social networking site to stay ....
pg 211 / 368 .... */
#include<stdio.h>
#include<string.h>
int main()
{
    char pass[100];
    int len,i,a=0,b=0,c=0,d=0;
    printf("Enter the password >> ");
    gets(pass);
    len=strlen(pass);
    if(len>=6)
    {
        for(i=0;i<len;i++)
        {
            if(pass[i]>='0'&&pass[i]<='9')
            a=1;
            if(pass[i]>='A'&&pass[i]<='Z')
            b=1;
            if(pass[i]>='a'&&pass[i]<='z');
            c=1;
            if(pass[i]=='!'||pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='^'||pass[i]=='&'||pass[i]=='*')
            d=1;
        }
         if(a==1&&b==1&&c==1&&d==1)
        printf("Strong Password");
        else
        printf("Weak Password");
    }
    else
    {
        printf("Password is too short\n");
    }
    return 0;
}
