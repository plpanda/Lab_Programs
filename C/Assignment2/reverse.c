/*Name :-program to reverse a four digit number
  Date :- 01.09.2015
  file name ;- reverse.c      */
#include<stdio.h>
main()
{
	int digit,sum=0;
	printf("Enter any 4 digit number : ");
	scanf("%d",&digit);
	sum=sum*10+(digit%10);
	digit/=10;
	sum=sum*10+(digit%10);
	digit/=10;
	sum=sum*10+(digit%10);
	digit/=10;
	sum=sum*10+(digit%10);
	digit/=10;
	printf("The reverse is : %d",sum);
}

