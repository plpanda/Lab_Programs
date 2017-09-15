/*Name : program to find the absolute val of a no
  Date: 06.10.2015
  Filename: absolute.c               */
#include<stdio.h>
int abs(unsigned int);
main()
{
	int no;
	printf("Enter any number :");
	scanf("%d",&no);
	printf("The absolute of the %d is %d\n",no,abs(no));
}
int abs(unsigned int no)
{
	return no;
}

