/*Name:- reverse an array to another                 
date :-20-10-2015
filename: rev.c       */
#include<stdio.h>
main()
{
	int arr1[20],arr2[20],size,cnt;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr1[cnt]);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		arr2[size-1-cnt]=arr1[cnt];
	}
	printf("\nthe array rev is ");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",arr2[cnt]);
	}
	printf("\n");
}

