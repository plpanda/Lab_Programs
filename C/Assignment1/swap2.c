/* Name :- Swap Two variables without using third variable
   Date :- 25.08.2015
   File Name :-swap2.c */
#include<stdio.h>
main()
{
	int no1,no2;
	no1=10;
	no2=20;
	printf("Before swapping no 1 is : %d",no1);
	printf("\nBefore swapping no 2 is : %d",no2);
	no1+=no2;
	no2=no1-no2;
	no1-=no2;
	printf("\nAfter swapping no 1 is : %d",no1);
	printf("\nAfter swapping no 2 is : %d",no2);
}
