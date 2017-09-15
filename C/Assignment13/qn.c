#include<stdio.h>
main()
{
	int arr[]={10,11,12,13,14,15,16};
	int *ptr1,*ptr2;
	ptr1=arr;
	ptr2=&arr[5];
	printf("ptr1 :- %d\n",ptr1);
	printf("ptr2 :- %d\n",ptr2);
	printf("ptr2 -ptr1 :- %d\n",ptr2-ptr1);
}


