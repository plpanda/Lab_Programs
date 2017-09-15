/*Name :-program to convert farenheit to celcius
  Date :- 01.09.2015
  file name ;- temp.c         */
#include<stdio.h>
main()
{
	float F,C;
	printf("Enter the temperature in farenheit");
	scanf("%f",&F);
	C=5*(F-32)/9;
	printf("The temperature in celcius is : %f",C);
	
}
