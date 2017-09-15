/* Name :- Distance between two points
   Date :- 25.08.2015
   File Name :- Distance.c   */
#include<stdio.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2;
	float dist;
	x1=5;
	y1=4;
	x2=8;
	y2=6;
	dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("The area is %f",dist);
}

