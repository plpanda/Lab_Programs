/*Name :-program to find the gross salary                 
  Date :- 01.09.2015
  file name ;- salary.c       */
#include<stdio.h>
main()
{
	float BS,DA,HRA,GS;
	printf("Enter the basic salary ");
	scanf("%f",&BS);
	DA=0.5*BS;
	HRA=0.15*HRA;
	GS=BS+DA+HRA;
	printf("The gross salary is : %f ",GS);

}
