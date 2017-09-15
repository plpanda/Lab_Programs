//program to implement merging
#include<stdio.h>
main()
{
	int A[10], B[10], C[20], n, m, o, i, j, temp, t2;
	printf("Enter the number of elements of first array :");	
	scanf("%d", &m);
	printf("Enter the number of elements of second array :");
	scanf("%d", &n);
	printf("Enter the elements of array 1\n");
	//input of elements

	for(i = 0; i < m; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &A[i]);
	}
	printf("Enter the elements of array 2\n");
	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &B[i]);
	}
	//sorting both arrays

	for(i = 0; i<=m - 1; ++i)
	{
		temp=A[i];
		for(j = i - 1; (j >= 0)&&(A[j] > temp); --j)
		{
			A[j + 1] = A[j];
		}
		A[j + 1]=temp;
	}

	for(i = 0; i<=n - 1; ++i)
	{
		temp=B[i];
		for(j = i - 1; (j >= 0)&&(B[j] > temp); --j)
		{
			B[j + 1] = B[j];
		}
		B[j + 1]=temp;
	}
	printf("\nArray 1 ");
	for(i=0;i<m;++i)
		printf("%d\t",A[i]);
	// MAIN MERGING A[] & B[] TO C[]
	printf("\nArray 2 ");
	for(i=0;i<n;++i)
		printf("%d\t",B[i]);
	i=0;
	j=0;
	for(o = 0; o < n+m; ++o)
	{
		if(A[i] > B[j])
		{
			C[o] = B[j];
			j++;
		}
		else if(B[j] >= A[i])
		{
			C[o] = A[i];
			i++;
		}
	}

	//printing array 
	printf("\nThe sorted array is  \n");
	for(i = 0; i < m+n; ++i)
		printf("%d \t",C[i]);
}






















