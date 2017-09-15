//addition of two sparse matrices
#include<stdio.h>
main()
{
	int A[100][3],B[100][3],C[100][3],t1,t2,i,j,k,m,n;
	printf("Enter the dimensions of matrices m X n :");
	scanf("%d %d",&m,&n);
	printf("Enter the rows of sparse matrix 1 ");
	scanf("%d",&t1);
	printf("Enter the sparse matrix 1 \n");
	A[0][0]=m;
	A[0][1]=n;
	A[0][2]=t1-1;
	for(i=1;i<t1;++i)
	{
		printf("Enter %d row :\ni:",i+1);
		scanf("%d",&A[i][0]);
		printf("j:");
		scanf("%d",&A[i][1]);
		printf("val: ");
		scanf("%d",&A[i][2]);
	}
	printf("Enter the rows of sparse matrix 2 ");
	scanf("%d",&t2);
	printf("Enter the sparse matrix 2 \n");
	B[0][0]=m;
	B[0][1]=n;
	B[0][2]=t2-1;
	for(i=1;i<t2;++i)
	{
		printf("Enter %d row :\ni:",i+1);
		scanf("%d",&B[i][0]);
		printf("j:");
		scanf("%d",&B[i][1]);
		printf("val: ");
		scanf("%d",&B[i][2]);
	}
	C[0][0]=m;
	C[0][1]=n;
	i=1;
	j=1;
	k=1;
	while(i<t1&&j<t2)
	{
		if(A[i][0]<B[j][0])
		{
			C[k][0]=A[i][0];
			C[k][1]=A[i][1];
			C[k++][2]=A[i++][2];
		}
		else if(A[i][0]>B[j][0])
		{
			C[k][0]=B[j][0];
			C[k][1]=B[j][1];
			C[k++][2]=B[j++][2];
		}
		else
		{
			if(A[i][1]<B[j][1])
			{
				C[k][0]=A[i][0];
				C[k][1]=A[i][1];
				C[k++][2]=A[i++][2];
			}
			else if(A[i][1]>B[j][1])
			{
				C[k][0]=B[j][0];
				C[k][1]=B[j][1];
				C[k++][2]=B[j++][2];
			}
			else
			{
				C[k][0]=A[i][0];
				C[k][1]=A[i][1];
				C[k++][2]=A[i++][2]+B[j++][2];
			}
		}
	}
	if(i==t1)
		while(j<t2)
		{
			C[k][0]=B[j][0];
			C[k][1]=B[j][1];
			C[k++][2]=B[j++][2];
		}
	else if(j==t2)
		while(i<t1)
		{
			C[k][0]=A[i][0];
			C[k][1]=A[i][1];
			C[k++][2]=A[i++][2];
		}
	C[0][2]=k;
	printf("Sparse 1\n");
	for(i=0;i<t1;++i)
	{
		for(j=0;j<3;++j)
			printf("  %d\t",A[i][j]);
		printf("\n");
	}
	printf("Sparse 2\n");
	for(i=0;i<t2;++i)
	{
		for(j=0;j<3;++j)
			printf("  %d\t",B[i][j]);
		printf("\n");
	}
	printf("Sum matrix \n");
	for(i=0;i<k;++i)
	{
		for(j=0;j<3;++j)
			printf("  %d\t",C[i][j]);
		printf("\n");
	}
}




	
