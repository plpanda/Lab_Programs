/*Name-check whether a given no. is divisible by both 11&13 or by both 5&7
  date-08.09.2015
  file-test.c       */
#include<stdio.h>
main()
{
	int no;
	printf("Enter one integr :");
	scanf("%d",&no);
	if(((no%11==0)&&(no%13==0))||((no%5==0)&&(no%7==0)))
	{
		printf("%d is divisible by both 11&13 or by both 5&7 ",no);
	}
	else
	{
		printf("%d is not divisible by both 11&13 or by both 5&7 ",no);
	}
		
}

