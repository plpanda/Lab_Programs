/* Name - program to print fibonacci series      
   Date - 22.09.2015
   filename - fbnci.c     */
#include<stdio.h>
main()
{
	int num,no1=0,no2=1;
	printf("Enter the range of printing fibonacci series ");
	scanf("%d",&num);
	printf("\n%d\t",no1);
	while(no2<=num)
	{
		printf("%d\t",no2);
		no2=no1+no2;
		no1=no2-no1;
		no2=no2-no1;
		no2=no1+no2;
	}
	}


