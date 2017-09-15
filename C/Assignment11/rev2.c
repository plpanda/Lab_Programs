/*Name:- reverse an array to another                 
date :-20-10-2015
filename: rev.c       */
#include<stdio.h>
main()
{
	int arr1[20],size,cnt,temp;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr1[cnt]);
	}
	for(cnt=0;cnt<size/2;++cnt)
	{
		temp=arr1[size-1-cnt];
		arr1[size-1-cnt]=arr1[cnt];
		arr1[cnt]=temp;
	}
	printf("\nthe array rev is ");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",arr1[cnt]);
	}
	printf("\n");
}

