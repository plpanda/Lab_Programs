/*Name:- insert an element in the array           
date :-20-10-2015
filename: ins.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,val,pos,size;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	printf("Enter the position of the element to be inserted :");
	scanf("%d",&pos);
	pos--;
	printf("Enter the value to be inserted ;");
	scanf("%d",&val);
	size++;
	for(cnt=1;(size-cnt+1)!=pos;++cnt)
	{
		arr[size-cnt+1]=arr[size-cnt];
	}
	arr[pos]=val;
	printf("\nThe inserted new array is :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",arr[cnt]);
	}

}

