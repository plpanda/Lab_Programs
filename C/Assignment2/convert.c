/*Name :-program to convert sec into hr min &sec             
  Date :- 01.09.2015
  file name ;- convert.c      */
#include<stdio.h>
main()
{
	int time,sec,hr,min;
	printf("Enter time in seconds    : ");
	scanf("%d",&time);
	hr=time/3600;
	time%=3600;
	min=time/60;
	sec=time%60;
	printf("The time is %dhr :%dmin :%dsec",hr,min,sec);
}

