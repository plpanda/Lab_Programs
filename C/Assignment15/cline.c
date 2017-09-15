#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int no1,no2;
	if(argc!=3)
	{
		printf("Incorrect input ");
		exit(1);
	}
	no1=atoi(argv[1]);
	no2=atoi(argv[2]);
	printf("Sum is %d ",no1+no2);
}

