/* Boy Valera likes strings. And even more ...
pg 223 / 368 ... */ 
#include<stdio.h>
#include<string.h>
long long d[50][50] = { 0 }, INF = 10000;
void floyd()
{
	long long i, j, k;
	for (k = 0; k < 26; k++)
		for (i = 0; i < 26; i++)
			for (j = 0; j < 26; j++)
				d[i][j] = d[i][j] < d[i][k] + d[k][j] ? d[i][j] : d[i][k] + d[k][j];
}
int main()
{
	long long n, i, j, w;
	char a[N] = { 0 }, b[N] = { 0 }, x, y;
	scanf("%s %s", a, b);
	scanf("%lld", &n);
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (i == j)
				d[i][j] = 0;
			else
				d[i][j] = INF;
		}
	}
	for (i = 0; i < n; i++)
	{
		scanf(" %c %c %lld", &x, &y, &w);
		long long t1 = x - 'a';
		long long t2 = y - 'a';
		d[t1][t2] = d[t1][t2] < w ? d[t1][t2] : w;
	}
	floyd();
	long long flag = 0, sum = 0;
	if (strcmp(a, b) != 0 && strlen(a) == strlen(b))
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			long long mint, min = INF;
			char t = 0;
			if (a[i] == b[i])
				continue;
			long long t1 = a[i] - 'a';
			long long t2 = b[i] - 'a';
			flag = 0;
			for (j = 0; j < 26; j++)
			{
				if (d[t1][j] < INF && d[t2][j] < INF)
				{
					mint = d[t1][j] + d[t2][j];
					if (mint < min)
					{
						min = mint;
						t = j + 'a';
					}
					flag = 1;
				}
			}
			if (flag == 0)
				break;
			else
			{
				sum += min;
				a[i] = t;
				b[i] = t;
			}
		}
		if (strcmp(a, b) != 0)
			printf("-1");
		else
		{
			printf("%lld\n", sum);
			printf("%s", a);
		}
	}
	else if (strcmp(a, b) == 0)
	{
		printf("%lld\n", sum);
		printf("%s", a);
	}
	else if (strlen(a) != strlen(b))
		printf("-1");
	return 0;
}
