//program to implement insertion sort
#include<stdio.h>
main()
{
	int A[20], n, i, j, temp;
	printf("Enter the number of elements you want to enter :");
	scanf("%d", &n);
	printf("Enter the elements \n");
	//input of elements

	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &A[i]);
	}
	//main algorithm of insertion sort

	for(i = 0; i<=n - 1; ++i)
	{
		temp=A[i];
		for(j = i - 1; (j >= 0)&&(A[j] > temp); --j)
		{
			A[j + 1] = A[j];
		}
		A[j + 1]=temp;
	}

	//printing array 
	printf("The sorted array is  \n");
	for(i = 0; i < n; ++i)
		printf("%d \t",A[i]);
}
