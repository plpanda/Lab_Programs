/*Name-program to solve a quadratic equation                              i
  date-08.09.2015
  file-quadratic.c  */
#include<stdio.h>
#include<math.h>
main()
{
	int no1,no2,no3,d;
	float x1,x2;
	printf("Enter the values for the quadratic equation ax^2+bx+c ");
	printf("\n Enter the value of a ");
	scanf("%d",&no1);
	printf("\n Enter the value of b ");
	scanf("%d",&no2);
	printf("\n Enter the value of c ");
	scanf("%d",&no3);
	if((no1==0)&&(no2==0))
	{
		printf("There is no solution for the expression %dx^2+%dx+%d",no1,no2,no3);
	}
	else if(no1==0)
	{
		printf("There is only one solution for the expression %dx^2+%dx+%d",no1,no2,no3);
		x1=(float)-no3/no2;
		printf("Solution is x= %f",x1);
	}
	else
	{
		d=(no2*no2)-(4*no1*no3);
		if(d<0)
		{
			printf("There is no real solution for the expression %dx^2+%dx+%d",no1,no2,no3);
		}
		else
		{
			x1=(-no2+sqrt(d))/(2*no1);
			x2=(-no2-sqrt(d))/(2*no1);
			printf("The solution for the expression %dx^2+%dx+%d is ",no1,no2,no3);
			printf("\n x1=%f\t x2=%f",x1,x2);
		}
	}
}






