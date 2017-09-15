/*Name:- reverse an array to another                 
date :-20-10-2015
filename: rev.c       */
#include<stdio.h>
main()
{
	int arr1[20],size,cnt,temp,*ptr;
	ptr=arr1;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :\n");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr+cnt);
	}
	for(cnt=0;cnt<size/2;++cnt)
	{
		temp=*(ptr+size-1-cnt);
		*(ptr+size-1-cnt)=*(ptr+cnt);
		*(ptr+cnt)=temp;
	}
	printf("\nthe array rev is ");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr+cnt));
	}
	printf("\n");
}

