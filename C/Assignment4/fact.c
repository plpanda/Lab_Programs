/* Name - program to print the factorial of a number
   Date - 15.09.2015
   filename - fact.c     */
#include<stdio.h>
main()
{
	int num,fact=1;
	printf("Enter any number :");
	scanf("%d",&num);
	while(num)
	{
		fact*=num;
		num--;
	}
	printf("The factorial is : %d ",fact);
}


