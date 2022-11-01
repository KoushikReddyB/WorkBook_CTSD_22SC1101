//Vimal found a pattern in the number...
//pg 157 / 368 ...
#include<stdio.h>
#include<math.h>
int main()
{
	int nthterm,modulo;
	printf("Enter the nth term:");
    scanf("%d", &nthterm);
    modulo = pow(10, 9) + 7;
    printf("%ld\n",(long long int)powl((nthterm % modulo) ,2%modulo)%modulo) ;
    return 0;
}
