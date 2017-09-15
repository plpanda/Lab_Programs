/*Name : program to find area of a square enclosed in a circle
  Date: 06.10.2015
  Filename: square.c               */
#include<stdio.h>
float area(int);
main()
{
	int no1;
	printf("Enter radius of the circle :");
	scanf("%d",&no1);
	printf("The area of the square fitting in circle is %f\n",area(no1));
}
float area(int no1)
{
	return(1.414*1.414*no1*no1);
}

