/* Name - devide two numbers without using / operator               
   Date - 22.09.2015
   filename - dev.c    */
#include<stdio.h>
main()
{
	int num1,num2,num,count=0;
	printf("Enter the divisor : ");
	scanf("%d",&num1);
	printf("Enter the divident :  ");
	scanf("%d",&num2);
	num=num1;
	if(num1<num2)
	{
		count=0;    
	}
	else
	{
		while((num1-num2)>num2)
		{
			count++;
			num1-=num2;
		}
	}
	++count;
	printf("%d/%d is %d \n",num,num2,count);
}

			
	



