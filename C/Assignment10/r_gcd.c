/*Name : program to find gcd of a number using recursion
  Date: 13.10.2015
  Filename:r_gcd.c               */
#include<stdio.h>
int gcd(int,int);
main()
{
	int no1,no2;
	printf("Enter any number1 :");
	scanf("%d",&no1);
	printf("Enter any number2 :");
	scanf("%d",&no2);
	printf("The gcd of %d and %d is %d\n",no1,no2,gcd(no1,no2));
}
int gcd(int no1,int no2)
{
	if(no1%no2==0)
		return(no2);
	else
		return(gcd(no2,no1%no2));

}

