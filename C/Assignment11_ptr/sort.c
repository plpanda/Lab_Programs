/* Name:- the array after sorting
date :-20-10-2015
filename: rot.c           */
#include<stdio.h>
void input(int*,int);
void display(int*,int);
void sort(int*,int);
main()
{
	int arr[20],size;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	input(arr,size);
	sort(arr,size);
	printf("\nthe sorted array is\n");
	display(arr,size);
}
void input(int* ptr,int size)
{
	int cnt;
	printf("\n Enter the values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf("%d",ptr+cnt);
	}
}
void sort(int* ptr,int size)
{
	int val,cnt,temp;	
	for(cnt=0;size!=cnt;++cnt)
	{
		for(val=cnt+1;val<size;++val)
		{
			if(*(ptr+cnt)>*(ptr+val))
			{
				temp=*(ptr+cnt);
				*(ptr+cnt)=*(ptr+val);
				*(ptr+val)=temp;
			}
		}
		display(ptr,size);
		printf("\n");
	}
}
void display(int* ptr,int size)
{
	int cnt;
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr+cnt));
	}
}
