/* Name  :- Area of triangle
   Date  :- 25.08.2015
   File Name :-Area_T.c   */
#include<stdio.h>
#include<math.h>
main()
{
	int s1,s2,s3,s;
	float area;
	s1=3;
	s2=4;
	s3=5;
	s=(s1+s2+s3)/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("Area of triangle is %f",area);
}

