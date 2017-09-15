
/* Name:- the array after rotation
date :-20-10-2015
filename: rot.c           */
#include<stdio.h>
void input(int*,int);
void display(int*,int);
void rotate(int*,int);
main()
{
	int arr[20],size,rot,no;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	input(arr,size);
	printf("Enter the rotation of the array ;");
	scanf("%d",&rot);
	for(no=1;no<=rot;++no)
	{ 
		rotate(arr,size);
		display(arr,size);
		printf("\n");
	}
	printf("\nthe rotated array is\n");
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
void rotate(int* ptr,int size)
{
	int val,cnt,temp;	
	val=*(ptr+size-1);
		for(cnt=0;size!=cnt;++cnt)
		{
			temp=*(ptr+size-cnt);
			*(ptr+size-cnt)=*(ptr+size-cnt-1);
			*(ptr+size-cnt-1)=temp;
		}
		*ptr=val;
}
void display(int* ptr,int size)
{
	int cnt;
	for(cnt=0;cnt<size;++cnt)
	{
		printf("%d\t",*(ptr+cnt));
	}
}
