/* Name - multiply two numbers without using *                       
   Date - 22.09.2015
   filename - mul.c       */
#include<stdio.h>
main()
{
	int num1,num2,sum=0;     
	printf("Enter any two numbers :");
	scanf("%d%d",&num1,&num2);
	while(num2--)
	{
		sum+=num1;
	}
	printf("%d",sum);
}


