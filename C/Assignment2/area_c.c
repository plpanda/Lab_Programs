/*Name :-program to find area and perimeter of a circle
  Date :- 01.09.2015
  file name ;- area_c.c       */
#include<stdio.h>
main()
{
	float rad,perimeter,area;
	printf("Enter the radius of the circle ");
	scanf("%f",&rad);
	perimeter=2*3.14*rad;
	area=3.14*rad*rad;
	printf("The perimeter is %f\nThe area is %f",perimeter,area);
}
