
/*Name:- find second max element in the array
date :-20-10-2015
filename: 2lar.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,cnt2,size,ele,*ptr;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	ptr=arr;
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr+cnt);
	}
	ele=*ptr;
	for(cnt=1;cnt<size;++cnt)
	{
		if(*(ptr+cnt)>ele)
			ele=*(ptr+cnt);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		if(*(ptr+cnt)==ele)
		{
			for(cnt2=cnt;cnt2<size-1;++cnt2)
			{
				*(ptr+cnt)=*(ptr+cnt+1);
			}
			size--;					
		}
	}
	ele=*ptr;
	for(cnt=1;cnt<size;++cnt)
	{
		if(*(ptr+cnt)>ele)
			ele=*(ptr+cnt);
	}
	printf("\nThe second largest element is %d \n",ele);
}

