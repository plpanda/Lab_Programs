/*Name :-program to find sum of digits of a four digit number
  Date :- 01.09.2015
  file name ;- digitsum.c     */
#include<stdio.h>
main()
{
	int digit,sum=0;
	printf("Enter any 4 digit number : ");
	scanf("%d",&digit);
	sum+=(digit%10);
	digit/=10;
	sum+=(digit%10);
	digit/=10;
	sum+=(digit%10);
	digit/=10;
	sum+=(digit%10);
	digit/=10;
	printf("The sum of digits is : %d",sum);

}

