//program to implement linear search
#include<stdio.h>
main()
{
	int A[20], n, i, ele;
	printf("Enter the number of elements you want to enter :");
	scanf("%d", &n);
	//input elements
	printf("Enter the elements \n");
	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &A[i]);
	}
	printf("Enter the element you want to search :");
	scanf("%d", &ele);
	//linear search logic
	for(i = 0; i < n; ++i)
	{
		if(A[i]==ele)
		{
			printf("Element found at pos %d \n", i+1);
			break;
		}
	}
	if(i==n)
		printf("Element not found \n");
}
