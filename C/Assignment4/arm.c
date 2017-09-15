/* Name - check whether the number is armstrong number or not    
   Date - 22.09.2015
   filename - arm.c       */
#include<stdio.h>
main()
{
	int num,num2,sum=0,dgt;       
	printf("Enter any number :");
	scanf("%d",&num);
	num2=num;
	while(num)
	{
		dgt=num%10;
		num/=10;
		sum+=(dgt*dgt*dgt);
	}
	if(num2==sum)
	{
		printf("%d is an armstrong number ",num2);
	}
	else
	{
		printf("%d is not an armstrong number",num2);
	}
}

		


