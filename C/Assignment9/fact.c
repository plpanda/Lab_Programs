/*Name : program to find factorial of a number
  Date: 06.10.2015
  Filename:fact.c               */
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
	int ans=1;
	no1+=1;
	while(--no1)
	{
		ans*=no1;
	}
	return ans;
}

