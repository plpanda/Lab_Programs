/*Name-program to calculate the grade
  date-08.09.2015
  filename-grade.c                   */
#include<stdio.h>
main()
{
	int mark1,mark2,mark3;
	float avg;
	char grade;
	printf("Enter the marks of three subjects \n");
	scanf("%d%d%d",&mark1,&mark2,&mark3);
	avg=(mark1+mark2+mark3)/3.0;
	if(avg>=90)
	{
		grade='O';
	}
	else if(avg>=80)
	{
		grade='E';
	}
	else if(avg>=70)
	{
		grade='A';
	}
	else if(avg>=60)
	{
		grade='B';
	}
	else if(avg>=50)
	{
		grade='C';
	}
	else if(avg>=40)
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
	printf("The Grade is %c\n ",grade);
}
