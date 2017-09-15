//program to implement bubble sort
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
	//main algorithm for bubble sort
	for(p = 0; p<n-1; ++p)
	{
		for(i = 0; i<n-p-1; ++i)
		{
			if(A[i]>A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
	}
	//printing elements
	printf("The sorted array is  \n");
	for(i = 0; i < n; ++i)
		printf("%d \t",A[i]);
}
