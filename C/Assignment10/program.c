#include<stdio.h>
#include<math.h>
int rev(int);
main()
{
	int no1,no2,cnt=0;
	printf("Enter range 1 and range 2 ");
	scanf("%d%d",&no1,&no2);
	for(;no1<=no2;++no1)
	{
		if(sqrt(rev(no1*no1))==rev(no1))
		{	printf("%d\t",no1);
			++cnt;
		}
	}
	printf("\n total is %d \n",cnt);
}
int rev(int no)
{
	int sum=0;
	while(no)
	{
		sum=sum*10+(no%10);
		no/=10;
	}
	return(sum);
}


