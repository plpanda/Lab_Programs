/*Name : program to find prime factors of a number
  Date: 06.10.2015
Filename:factor.c               */
#include<stdio.h>
void factor(int);
int prime(int);
main()
{
	int no1;
	printf("Enter any number :");
	scanf("%d",&no1);
	factor(no1);
}
int prime(int no)
{
	int flag=1,cnt=2;
	while(cnt<no)
	{
		if(no%cnt==0)
		{
			flag--;
			break;
		}
		++cnt;
	}
	return flag;
}
void factor(int no)
{
	int no1=2;
	while(no1<no)
	{
		if(no%no1==0)
		{
			if(prime(no1))
			{
				printf("%d\t",no1);
			}
		}
		++no1;

	}
}

