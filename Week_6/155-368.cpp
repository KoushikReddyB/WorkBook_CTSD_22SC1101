//Cities on a map are connected by ...
//pg 155 / 368...
#include <stdio.h>
int main() 
{

    int n;
    long long int c,ans;
    ans=1;
    printf("Enter number or routes:");
    scanf("%d",&n);
    while(n>1)
    {
    	scanf("%lld",&c);
        ans*=c;
        ans%=1234567;
        n--;
    }
    printf("%lld\n",ans);
    return 0;
}
