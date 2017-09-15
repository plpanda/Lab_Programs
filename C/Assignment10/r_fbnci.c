/*Name : program to print the fibonacci series using recursion
  Date: 13.10.2015
  Filename:r_fbnci.c               */
#include<stdio.h>
void fbnci(int,int,int);
main()
{
	int no1;
	printf("Enter the range forr fibonacci series :");
	scanf("%d",&no1);
	fbnci(0,1,no1);
}
void fbnci(int no1,int no2,int no)
{
	if(no1>no)
		return;
	else
	{
		printf("%d\t",no1);
		return fbnci(no2,no1+no2,no);
	}

}

