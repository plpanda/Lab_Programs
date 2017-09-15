/*Name:- the array after rotation
date :-20-10-2015
filename: rot.c           */
#include<stdio.h>
main()
{
	int arr[20],cnt,size,rot,no,temp,val;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",&arr[cnt]);
	}
	printf("Enter the rotation of the array ;");
	scanf("%d",&rot);
	for(no=1;no<=rot;++no)
	{ 
		val=arr[size-1];
		for(cnt=0;size!=cnt;++cnt)
		{
			temp=arr[size-cnt];
			arr[size-cnt]=arr[size-cnt-1];
			arr[size-cnt-1]=temp;
		}
		arr[0]=val;
	}

	printf("\nthe rotated array is\n");
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",arr[cnt]);
	}
}

