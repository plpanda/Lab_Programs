/*Name-program to roud a given floating numbern                           
  date-08.09.2015
  file-round.c      */
#include<stdio.h>
main()
{
	float no;                
	int flr,clng;
	printf("Enter any floating point number :");
	scanf("%f",&no);
	if(no>=0)
	{
		flr=(int)no;
		clng=flr+1;
	}
	else
	{
		clng=(int)no;
		flr=clng-1;
	}
	printf("%f celling is %d, floor is %d",no,clng,flr);
	}



