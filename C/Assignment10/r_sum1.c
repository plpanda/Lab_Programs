/*Name : program to find sum of digits of a numberusing recursion
  Date: 13.10.2015
  Filename:r_sum.c               */
#include<stdio.h>
int sum(int);
main()
{
	int no1;
	printf("Enter any number :");
	scanf("%d",&no1);
	printf("The sum of digits of %d is %d\n",no1,sum(no1));
}
int sum(int no1)
{
	if(no1==0)
		return 0;
	else 
		return((no1%10)+sum(no1/10));
}

