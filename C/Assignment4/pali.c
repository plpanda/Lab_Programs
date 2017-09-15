/* Name - find the pallindrome of a number
   Date - 15.09.2015
   filename - pali.c     */
#include<stdio.h>
main()
{
	int num,rev=0,temp;
	printf("Enter any number :");
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		rev=rev*10+(num%10);
		num/=10;
	}
	if(rev==temp)
	{
		printf("The number %d id pallindrome \n",rev);
	}
	else
	{
		printf("The number %d is not pallindrome ",temp);
	}
}



