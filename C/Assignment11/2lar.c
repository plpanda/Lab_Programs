/*Name:- find second max element in the array
date :-20-10-2015
filename: 2lar.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,cnt2,size,ele;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	ele=arr[0];
	for(cnt=1;cnt<size;++cnt)
	{
		if(arr[cnt]>ele)
			ele=arr[cnt];
	}
	for(cnt=0;cnt<size;++cnt)
	{
		if(arr[cnt]==ele)
		{
			for(cnt2=cnt;cnt2<size-1;++cnt2)
			{
				arr[cnt]=arr[cnt+1];
			}
			size--;					
		}
	}
	ele=arr[0];
	for(cnt=1;cnt<size;++cnt)
	{
		if(arr[cnt]>ele)
			ele=arr[cnt];
	}
	printf("\nThe second largest element is %d \n",ele);
}

