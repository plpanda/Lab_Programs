//program to implement binary search
#include<stdio.h>
main()
{
	int A[20], n, i, ele, l, u, m, p, temp;
	printf("Enter the number of elements you want to enter :");
	scanf("%d", &n);
	l = 0;
	u = n-1;
	//input elements
	printf("Enter the elements \n");
	for(i = 0; i < n; ++i)
	{
		printf("Enter element %d :", i+1);
		scanf("%d", &A[i]);
	}

	//main algorithm for bubble sort
	for(p = 0; p<n; ++p)
	{
		for(i = 0; i<n-p; ++i)
		{
			if(A[i]>A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
	}
	printf("array is : \n ");
	for(i=0;i<n;++i)
			printf("%d\t",A[i]);

	printf("\nEnter the element you want to search :");
	scanf("%d", &ele);
	//linear search logic
	while(l<=u)
	{
		m=(l+u)/2;
		if(ele>A[m])
			l = m+1;
		else if(ele<A[m])
			u = m-1;
		else
		{
			printf("Element found at %d \n ", m+1);
			break;
		}
	}
	if(l>u)
		printf("Element not found \n");
}
