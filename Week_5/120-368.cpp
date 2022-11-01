//The Utopian Tree goes through...
//pg 120 / 368...
#include<stdio.h>
int main()
{
    int h=1,n,i;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            h=2*h;
        else
            h=h+1;
            printf("\nTime Period=%d\tHeight=%d",n,i);
    }
	printf("\nPresent height is %d\n",h);
    return 0;
}

