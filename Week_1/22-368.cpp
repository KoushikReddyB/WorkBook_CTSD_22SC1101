//A university has 4000 student....
//pg 22 / 368 ...
#include<stdio.h>
int main()
{
	int uni,btech,mtech,ms,phd;
	uni=2022;
	btech=1555;
	mtech=256;
	ms=131;
	phd=uni-(btech+mtech+ms);
	printf("The members who took phd is %d \n",phd);
	btech=(btech*100)/uni;
	printf("The percentage of students in btech are %d \n",btech);
	mtech=(mtech*100)/uni;
	printf("The percentage of students in mtech are %d \n",mtech);
	ms=(ms*100)/uni;
	printf("The percentage of students in ms are %d \n",ms);
	phd=(phd*100)/uni;
	printf("The percentage of students in phd are %d \n",phd);
	return 0;
}
