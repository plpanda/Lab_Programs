/*Name-check whether a given no. is posetive or -ve
  date-08.09.2015
  file-check.c      */
#include<stdio.h>
main()
{
	int no;
	printf("Enter one integr :");
	scanf("%d",&no);
	if(no==0)
	{
		printf("The no is 0 ");
	}
	else if(no>0)
	{
		printf("The no is posetive ");
		
	}
	else
	{
		printf("The no is negetive ");
	}
}
	
