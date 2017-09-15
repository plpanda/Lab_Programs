/*Name:- find an element in the array
date :-20-10-2015
filename: search.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,counter=0,size,ele;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	printf("\nenter the element to be searched ");
	scanf("%d",&ele);
	for(cnt=0;cnt<size;++cnt)
	{
		if(arr[cnt]==ele)
		{
			if(counter==0)
				printf("Element is found at position : ");
			++counter;
			printf("%d\t",cnt+1);
		}
	}
	if(counter)
	{
		printf("\ntotal similarities %d\n",counter);
	}
	else
	{
		printf("\nElement not found in the array \n");
	}
}

