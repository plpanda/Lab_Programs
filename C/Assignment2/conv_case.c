/*Name :-program to convert a lower case to upper case
  Date :- 01.09.2015
  file name ;- conv_case.c    */
#include<stdio.h>
main()
{
	char low,up;
	printf("enter a lower case character ");
	scanf("%c",&low);
	up=low-32;
	printf("\nLOWER CASE : %c\nUPPER CASE : %c",low,up);
}

