/*Name : program to find area of a circle
  Date: 06.10.2015
  Filename: area.c               */
#include<stdio.h>
float area(int);
main()
{
	int no1;
	printf("Enter radius of the circle :");
	scanf("%d",&no1);
	printf("The area of the circle is %f\n",area(no1));
}
float area(int no1)
{
	return(2*3.14*no1);
}

