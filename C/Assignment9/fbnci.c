/*Name : program to print the fibonacci series
  Date: 06.10.2015
  Filename:fbnci.c               */
#include<stdio.h>
void fbnci(int);
main()
{
	int no1;
	printf("Enter the range forr fibonacci series :");
	scanf("%d",&no1);
	fbnci(no1);
}
void fbnci(int no)
{
	int no1=0,no2=1;
	while(no2<=no)
	{
		printf("%d  %d  ",no1,no2);
		no1=no1+no2;
		no2=no1+no2;
	}
}

