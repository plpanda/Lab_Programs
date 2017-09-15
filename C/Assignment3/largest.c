/*Name-program to find the largest among three numbers                    i
  date-08.09.2015
  file-largest.     */
#include<stdio.h>
main()
{
	int no1,no2,no3,large;
	printf("Enter three numbers ");
	scanf("%d %d %d",&no1,&no2,&no3);
	if(no1>no2)
	{
		if(no1>no3)
		{
			large=no1;
		}
		else
		{
			large=no3;
		}
	}
	else
	{
		if(no2>no3)
		{
			large=no2;
		}
		else
		{
			large=no3;
		}
	}
	printf("The largest among %d,%d,%d is %d",no1,no2,no3,large);
}

