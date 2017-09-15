/* Name - convert a number from decimal to binary                   
   Date - 22.09.2015
   filename - conv.c    */
#include<stdio.h>
#include<math.h>
main()
{
	int dec,bin=0,count=0,dgt;
	printf("Enter any number :");
	scanf("%d",&dec);      
	while(dec)
	{
		dgt=dec%2;
		dec/=2;
		bin+=(dgt*pow(10,count));
		count++;
	}
	printf("The binary equivalent of the number is %d\n",bin);
}



