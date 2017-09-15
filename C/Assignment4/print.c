/* Name - program to print a number in letters   
   Date - 15.09.2015
   filename - print.c     */
#include<stdio.h>
main()
{
	int num,digit,rev=0,no=0;
	printf("Enter any number :");
	scanf("%d",&num);
	while(num)
	{
		rev=rev*10+(num%10);
		num/=10;
		++no;
	}
	while(no--)
	{
		digit=rev%10;
		switch(digit)
		{
			case 1:printf("One ");
			       break;
			case 2:printf("Two ");
			       break;
			case 3:printf("Three ");
			       break;
			case 4:printf("Four ");
			       break;
			case 5:printf("Five ");
			       break;
			case 6:printf("Six ");
			       break;
			case 7:printf("Seven ");
			       break;
			case 8:printf("Eight ");
			       break;
			case 9:printf("Nine ");
			       break;
			default:printf("Zero ");
		}
		rev/=10;
	
	}
	printf("\n");
}



