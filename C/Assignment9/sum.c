/*Name : program to find sum of digits of a number
  Date: 06.10.2015
  Filename:sum.c               */
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
	int ans=0;
	while(no1)
	{
		ans+=(no1%10);
		no1/=10;
	}
	return ans;
}

