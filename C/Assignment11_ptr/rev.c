/*Name:- reverse an array to another                 
date :-20-10-2015
filename: rev.c       */
#include<stdio.h>
main()
{
	int arr1[20],arr2[20],size,cnt,*ptr1,*ptr2;
	ptr1=arr1;
	ptr2=arr2;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr1+cnt);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		*(ptr2+size-1-cnt)=*(ptr1+cnt);
	}
	printf("\nthe array rev is ");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr2+cnt));
	}
	printf("\n");
}

