//After a long time of ...
// pg 33 / 368 ...
#include<stdio.h>
int main()
{
	char name[80];
	char morf[10],branch[50];
	long id[10],phone[10];
	float CGPA;
	printf("Enter Name\n");
	gets(name);
	printf("Enter registration id\n");
	scanf("%s",&id);
	printf("Enter Gender\n");
	gets(morf);
	printf("Enter Branch\n");
	gets(branch);
	printf("Enter Phone number\n");
	scanf("%s",&phone);
	printf("Enter CGPA\n");
	scanf("%f",&CGPA);
	printf("Name:%s\nReg ID:%s\nGender:%c\nBranch:%s\nPhone Number:%s\nCGPA:%f\n",name,id,morf,branch,phone,CGPA);
	return 0;
}
