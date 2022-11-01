//Predict the output for ...
// pg 64b / 368 ... 
#include<stdio.h>
int main()
{
	auto int num;
	num=20;
	{
		auto int num;
		num=60;
		printf("Num:%d\n",num);
	}
	printf("Num:%d\n",num);
	return 0;
}
