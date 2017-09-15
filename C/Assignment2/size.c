/* Name :- Find the size of all data types
   Date :- 01.09.2015
   Filename :- size.c        */
#include<stdio.h>
main()
{
	int num=145;
	char ch='S';
	float val=6.525;
	double no=54.51415314;
	printf("\nThe size of integer is   : %d",sizeof(num));
	printf("\nThe size of character is : %d",sizeof(ch));
	printf("\nThe size of float is     : %d",sizeof(val)); 
	printf("\nThe size of double is    : %d \n",sizeof(no));
	
}
