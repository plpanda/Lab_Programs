/*Name:- find the maximum element in the array
date :-20-10-2015
filename: max           */
#include<stdio.h>
main()
{
	int arr[20],cnt,lar,size;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	lar=arr[0];
	for(cnt=1;cnt<size;++cnt)
	{
		if(arr[cnt]>lar)
		{
			lar=arr[cnt];
		}
	}
	printf("\nthe largest element is %d\n",lar);
}

