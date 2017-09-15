/*Name-program to check validity of atriangle                    
  date-08.09.2015
  filename-triangle.c                */
#include<stdio.h>
main()
{
	int side1,side2,side3;     
	prinf("Enter the three sides of a triangle \n");
	scanf("%d%d%d",&side1,&side2,&side3);
	if((side1+side2)<side3)
	{
		printf("The sides are of a invalid triangle ");
	}
	else
	{
		if((side1==side2)&&(side2==side3))
		{
			printf("Equilateral triangle \n");
		}
		else if((side1==side2)||(side1==side3)||(side2==side3))
		{
			printf("Isosceles Triangle \n");
		}
		



