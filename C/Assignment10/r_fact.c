/*Name : program to find factorial of a number using recursion
  Date: 13.10.2015
  Filename:r_fact.c               */
#include<stdio.h>
int fact(int);
main()
{
	int no1;
	printf("Enter any number :");
	scanf("%d",&no1);
	printf("The factorial of %d is %d\n",no1,fact(no1));
}
int fact(int no1)
{
	if(no1==0||no1==1)
		return 1;
	else
		return(no1*fact(no1-1));
}

