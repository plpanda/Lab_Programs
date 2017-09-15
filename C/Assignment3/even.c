/*Name-check whether a given no. is even or odd    
  date-08.09.2015
  file-even.c       */
#include<stdio.h>
main()
{
	int no;
	printf("Enter one integer :");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("The number id even ");
	}
	else
	{
		printf("The number is odd ");
	}
}

