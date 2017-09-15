/*Name:- copy an array to another                 
date :-20-10-2015
filename: copy.c       */
#include<stdio.h>
main()
{
	int arr1[20],arr2[20],size,cnt,*ptr1,*ptr2;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	ptr1=arr1;
	ptr2=arr2;
	printf("\n Enter the values of the array :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr1+cnt);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		*(ptr2+cnt)=*(ptr1+cnt);
	}
	printf("\nthe array copied is ");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr2+cnt));
	}
	printf("\n");
}

