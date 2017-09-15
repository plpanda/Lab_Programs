/* Name - check whether the number is prime or not
   Date - 15.09.2015
   filename - prime.c    */
#include<stdio.h>
main()
{
	int num,count=2,flag=0;
	printf("Enter any number :");
	scanf("%d",&num);
	while(count<num)
	{
		if(num%count==0)
		{
			++flag;
		}
		++count;
	}
	if(flag==0)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not prime \n",num);
	}
}


