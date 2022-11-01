/* Predit the output ...
pg 180 / 368 ... */
#include<stdio.h>
int fun(int i)
{
	if(i%2)
	return (i++);
	else
	return fun(fun(i-1));
}
int main()
{
	printf("%d",fun(200));
	getchar();
	return 0;
}
