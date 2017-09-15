/*Name : program to find sum of first n numbers using recursion 
  Date: 13.10.2015
  Filename: r_sum.c               */
#include<stdio.h>
int sum(int);
main()
{
	int no1;
	printf("Enter the value of n :");
	scanf("%d",&no1);
	printf("The sum of n natural numbers is  %d\n",sum(no1));
}
int sum(int no1)
{
	if(no1==0)
		return 0;
	else
		return(no1+sum(no1-1));

}

