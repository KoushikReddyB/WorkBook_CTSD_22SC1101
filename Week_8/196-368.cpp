/*A phrase is a palindrome if, after converting...
pg 196 / 368 ...*/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    int i,j,diff=0;
    printf(" Enter a string : ");
    gets(str);
    //Iterating each character and removing non alphabetical characters.
    for(i=0;str[i]!='\0';++i)
    {
        while (!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||str[i]=='\0'))
        {
            for(j=i;str[j]!='\0';++j)
            {
                str[j]=str[j+1];
            }
            str[j]='\0'; 
        }
    }
    printf("After removing :");
    strlwr(str);
    puts(str);
    strcpy(str2,str);
    strrev(str2);
    printf("After reversing:");
    puts(str2);
    diff=strcmp(str,str2);
    if(diff==0)
    printf("Palindrome");
    else
    printf("Not-Palindrome");
    return 0;
}
