/*Name-program to find ayear is leap year or not                          
  date-08.09.2015
  file-leap.c       */
#include<stdio.h>
main()
{
	int yr;
	printf("Enter one year :");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("The year %d is a leap year ",yr);
	}
	else
	{
		printf("The year %d is not a leap year ",yr);
	}
}

