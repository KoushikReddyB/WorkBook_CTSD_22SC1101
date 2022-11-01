//Manisha works in a supermarket in...
//pg 57 / 368 ...
#include<stdio.h>
float bill_tot(int np,float p,int nc,float c);
int bill_ret(int a,int p);
int main()
{
	int npen,nchoco,paid;
	float choco,pen,tot,reton;
	printf("Enter the number of chocolates and pens \n");
	scanf("%d%d",&npen,&nchoco);
	printf("Enter the price of each pen and chocolate \n");
	scanf("%f%f",&pen,&choco);
	printf("Enter amount paid at counter");
	scanf("%d",&paid);
	tot=bill_tot(npen,pen,nchoco,choco);
	reton=bill_ret(tot,paid);
	printf("The Total Amount is %f and the amount to be return is %f",tot,reton);
	return 0;
}
float bill_tot(int np,float p,int nc,float c)
{
	float total;
	total=(np*p)+(nc*c);
	return total;	
}
int bill_ret(int a,int p)
{
	int rem;
	rem=p-a;
	return rem;
}
