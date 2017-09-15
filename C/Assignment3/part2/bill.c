/*Name-program to calculate the electric bill from meter readings
  date-08.09.2015
  filename-bill.c                    */
#include<stdio.h>
main()
{
	int previous,current,units;
	float bill;
	printf("Enter the previous meter reading  ");
	scanf("%d",&previous);
	printf("Enter the current  meter reading  ");
	scanf("%d",&current); 
	units=current-previous;
	if(units>200)
	{
		bill=(2.4*100)+(3.5*100)+4.2*(units-200);
	}
	else if(units>100)
	{
		bill=(2.4*100)+3.5*(units-100);
	}
	else
	{
		bill=2.4*units;
	}
	printf("The billed amount is Rs%f",bill);
}


