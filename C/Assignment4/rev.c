/* Name - find the reverse of a number
   Date - 15.09.2015
   filename - rev.c     */
#include<stdio.h>
main()
{
	int num,rev=0;
	printf("Enter any number :");
	scanf("%d",&num);
	while(num)
	{
		rev=rev*10+(num%10);
		num/=10;
	}
	printf("The reverse is ;%d \n",rev);
}


