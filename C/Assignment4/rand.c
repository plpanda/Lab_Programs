/* Name - program to count no of odd and even numbers   
   Date - 15.09.2015
   filename - rand.c     */
#include<stdio.h>
main()
{
        int num,odd=0,even=0,count=10;
	printf("Enter any 10 random numbers :\n ");
	while(count--)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}
	printf("Number of even nos : %d\n Number of odd nos : %d",even,odd);
}


