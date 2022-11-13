/*A competiotion is conducted in two different ...
pg 239 / 368 ... */
#include<stdio.h>
int main()
{
    int i,n,a[100],z=0,y=0;
    printf("Enter the number of Registration codes: ");
    scanf("%d",&n);
    printf("Enter the registration codes:\n ");
    for(i=0;i<n;i++)
    {
    	printf("Registration Code of Student %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            z++;
        }
        else
        y++;
    }
    printf("\nEven registration students=%d\nOdd registration students=%d",z, y);
    return 0;
}
