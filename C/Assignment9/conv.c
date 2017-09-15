/*Name : program to convert km to miles
  Date: 06.10.2015
  Filename: conv.c               */
#include<stdio.h>
float convert(int);
main()
{
	int no1;
	printf("Enter the Km value :");
	scanf("%d",&no1);
	printf("\n%d Km is %f miles\n",no1,convert(no1));
}
float convert(int no1)
{
	return((no1*5)/8);
}

