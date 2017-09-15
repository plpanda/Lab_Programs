/*Name:- find the sum ofthe  element in the array
date :-20-10-2015
filename: sum.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,sum=0,size;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		sum+=arr[cnt];
	}
	printf("\nthe sum of the elements is %d\n",sum);
}

