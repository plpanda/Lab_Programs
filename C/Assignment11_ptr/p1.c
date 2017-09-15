/*Name:- display an array after input
date :-20-10-2015
filename: p1.c            */
#include<stdio.h>
main()
{
	int arr[20],cnt,size,*ptr;
	ptr=arr;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr+cnt);
	}
	printf("\n The entered array is: \n");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr+cnt));
	}
	printf("\n");
}

