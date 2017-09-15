/*Name : program to find prime factors of a number using recursion
  Date: 13.10.2015
Filename:r_factor.c               */
#include<stdio.h>
void factor(int,int);
int prime(int);
main()
{
	int no1;
	printf("Enter any number :");
	scanf("%d",&no1);
	factor(no1,2);
	
}
int prime(int no)
{
	int cnt=2;
	while(cnt<no)
	{
		if(no%cnt==0)
			return 0;
		++cnt;
	}
	return 1;
}
void factor(int no,int num)
{
	if(no==num)
		return;
	if(no%num==0)
	{
		if(prime(num)==1)
		{
			printf("%d\t",num);
		}
	}
	return factor(no,num+1);
}

