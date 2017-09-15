/*Name : program to find a^b
  Date: 06.10.2015
  Filename: pow.c               */
#include<stdio.h>
int power(int,int);
main()
{
	int no1,no2;
	printf("Enter number1 :");
	scanf("%d",&no1);
	printf("Enter number2 :");
	scanf("%d",&no2);
	printf("The value of %d^%d is %d\n",no1,no2,power(no1,no2));
}
int power(int no1,int no2)
{
	int no=1;
	while(no2--)
	{
		no*=no1;
	}
	return no;
}

