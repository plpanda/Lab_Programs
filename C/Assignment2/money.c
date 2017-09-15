/*Name :-program to calculate the total amount of money in piggybank
  Date :- 01.09.2015
  file name ;- money.c        */
#include<stdio.h>
main()
{
	int rs10,rs5,rs2,rs1,total;
	printf("Enter no of Rs 10 coins  : ");
	scanf("%d",&rs10);
	printf("Enter no of Rs  5 coins  : ");
	scanf("%d",&rs5);
	printf("Enter no of Rs  2 coins  : ");
	scanf("%d",&rs2);
	printf("Enter no of Rs  1 coins  : ");
	scanf("%d",&rs1);
	total=10*rs10+5*rs5+2*rs2+rs1;
	printf("The total amount of money is : Rs%d ",total);
}

