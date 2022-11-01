//Google is recuring software engineers to calculate distance...
//pg 24 / 368 ...
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,dist;
	x1=1;
	y1=2;
	x2=3;
	y2=4;
	dist=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
	dist=dist+2;
	printf("The total distance of the building A to building C is %f kms",dist);
	return 0;
}
