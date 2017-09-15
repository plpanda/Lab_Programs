//program to implement selection sort
#include<stdio.h>
main()
{
	int A[20], n, i, p, temp;
	printf("Enter the number of elements you want to enter :");
	scanf("%d", &n);
	printf("Enter the elements \n");
	//input of elements

	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &A[i]);
	}
	//main algorithm of selection sort

	for(p = 0; p<n-1; ++p)
	{
		for(i = p + 1; i < n-1; ++i)
		{
			if(A[p]>A[i])
			{
				temp = A[i];
				A[i] = A[p];
				A[p] = temp;
			}
		}
	}

	//printing array 
	printf("The sorted array is  \n");
	for(i = 0; i < n; ++i)
		printf("%d \t",A[i]);
}
