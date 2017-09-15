/*Name :-program to find the sum and avg of 5 numbers  
  Date :- 01.09.2015
  file name ;- avg.c       */
#include<stdio.h>
main()
{
	int no1,no2,no3,no4,no5;
	float sum,avg;
	printf("Enter the 5 numbers \n");
	scanf("%d%d%d%d%d",&no1,&no2,&no3,&no4,&no5);
	sum=no1+no2+no3+no4+no5;
	avg=sum/5.0;
	printf("The sum is :%f\nThe Avg is :%f",sum,avg);
}
