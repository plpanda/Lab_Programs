/*Name:- find the no of armstrong nos in the array
date :-20-10-2015
filename: chk2.c           */
#include<stdio.h>
int check(int);
main()
{
	int cnt,sum=0,size;
	int arr[20];
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the char values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf(" %d",&arr[cnt]);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		if(check(arr[cnt]))
		{
			sum++;
		}	
	}
	printf("\nthe number of armstrong nos is %d\n",sum);
}

int check(int no)
{
	int no1=no,dgt,sum=0;
	while(no)
	{
		dgt=no%10;
		sum+=(dgt*dgt*dgt);
		no/=10;
	}
	if(no1==sum)
		return 1;
	else 
		return 0;
}



