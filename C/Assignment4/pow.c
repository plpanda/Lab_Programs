/* Name - program to fint x^y                    
   Date - 22.09.2015
   filename - pow.c       */
#include<stdio.h>
main()
{
	int no1=0,no2=1,ans=1,no;
	printf("Enter the values of x and y in x^y \nx= ");
	scanf("%d",&no1);
	printf("y= ");
	scanf("%d",&no2);
	no=no2;
	while(no2--)
	{
		ans*=no1;
	}
	printf("%d^%d is %d",no1,no,ans);
}

