/* Name - check whether the number within a range is prime or not
   Date - 22.09.2015
   filename - prime2.c    */
#include<stdio.h>
main()
{
	int range,num,count,flag;
	printf("Enter any number :");
	scanf("%d",&range);
	for(num=2;num<range;++num)
	{
		count=2;
		flag=0;
		while(count<num)
		{
			if(num%count==0)
			{
				++flag;
			}
			++count;
		}
		if(flag==0)
		{
			printf("%d\t",num);
		}
	}
}


