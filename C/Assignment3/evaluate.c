/*Name-program to evaluate the given expression                           
  date-08.09.2015
  file-evaluate.c   */
#include<stdio.h>
main()
{
	float no1,no2,no3,no4;
	float res;
	printf("Enter the values for the expression x=(a-b)/(c-d) ");
	printf("\nEnter the value of a : "); 
	scanf("%f",&no1);
	printf("\nEnter the value of b : "); 
	scanf("%f",&no2);
	printf("\nEnter the value of c : "); 
	scanf("%f",&no3);
	printf("\nEnter the value of d : "); 
	scanf("%f",&no4);
	if(no3==no4)
	{
		printf("Division cannot be done ");
	}
	else
	{
		res=(no1-no2)/(no3-no4);
		printf("The value of x is %f ",res);
	}
}



