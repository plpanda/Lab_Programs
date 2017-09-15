/*Name : program to find gcd of a number
  Date: 06.10.2015
  Filename:gcd.c               */
#include<stdio.h>
int gcd(int,int);
main()
{
	int no1,no2;
	printf("Enter any number1 :");
	scanf("%d",&no1);
	printf("Enter any number2 :");
	scanf("%d",&no2);
	printf("The gcd of %d and %d is %d\n",no1,no2,gcd(no1,no2));
}
int gcd(int no1,int no2)
{
	int ans=2,gcd=1;
	while(ans<=no1)
	{
		if(no1%ans==0&&no2%ans==0)
		{
			no1/=ans;
			no2/=ans;
			gcd*=ans;
			ans=2;
		}
		else
			++ans;
	}
	return gcd;
}

