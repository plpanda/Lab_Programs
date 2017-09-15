#include<stdio.h>
main()
{
	int A[20],i,n,j,x;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements in sorted order :\n");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	printf("Enter the sumation value X ");
	scanf("%d",&x);
	i=0;
	j=n-1;
	while(i>=j)
	{
		if(A[i]+A[j]==x)
		{
			printf("%d + %d = %d\n",A[i],A[j],x);
			break;
		}
		if(A[i]+A[j]>x)
			--j;
		if(A[i]+A[j]<x)
			++i;
	}

		
}
