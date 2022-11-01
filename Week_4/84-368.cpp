//Your local library needs your help ...
// pg 84 / 368 ... 
#include<stdio.h>
int main()
{
	int ret_year, ret_month, ret_day, due_year, due_month, due_day;
	int fine=0;
	printf("Enter Due date in DD MM YYYY format\n");
	scanf("%d%d%d",&due_day,&due_month,&due_year);
	printf("Enter the Return day in DD MM YYYY format \n");
	scanf("%d%d%d",&ret_day,&ret_month,&ret_year);
	if(ret_year==due_year)
	{
		if(ret_month==due_month)
		{
			if(ret_day>due_day)
			{
				fine=15*(ret_day-due_day);
			}
		}
		else if(ret_month>due_month)
		{
			fine=500*(ret_month-due_month);
		}
    }
    else if (ret_year > due_year)
    {
        fine = 10000;
    }
	printf("\nFine = %d",fine);
	return 0;
}
