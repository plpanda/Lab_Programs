/* Name :- Smallest among two nos. using conditional operators
   Date :-01.09.2015
   Filename :- small.c           */
#include<stdio.h>
main()
{
	int no1,no2,small;
	printf("Enter two numbers \n");
	scanf("%d%d",&no1,&no2);
	small=(no1<no2)?no1:no2;
	printf("The smallest of the two is : %d \n",small);
	
}
