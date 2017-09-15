/* Name - find the sum of digits of a number
   Date - 15.09.2015
   filename - sum.c     */
#include<stdio.h>
main()
{
	int num,sum=0;
	printf("Enter any number :");
	scanf("%d",&num);
	while(num)
	{
		sum+=(num%10);
		num/=10;
	}
	printf("The sum of digits is %d\n ",sum);
}

