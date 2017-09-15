/* Name - check whether the given year is a leap year or not     
   Date - 22.09.2015
   filename - leap.c    */
#include<stdio.h>
main()
{
	int range1=1980,range2=2010,count=0;
	while(range1<=range2)
	{
		if(range1%4==0)
		{
			printf("%d\t",range1);
			count++;
		}
		range1++;
	}

	printf("\nThe no of leap years between 1980 and 2010 is %d as given above ",count);
}

