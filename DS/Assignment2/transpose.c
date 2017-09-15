//transpose a sparse matrix
#include<stdio.h>
main()
{	
	int A[10][10],B[101][3],C[101][3],m,n,t=1,i,j,k=1;
	printf("Enter the dimension of array (max 10 X 10) :");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("Enter the values of matrix :\n");
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
		{
			printf("Enter the %d  X %d element : ",i+1,j+1);
			scanf("%d",&A[i][j]);
			if(A[i][j]!=0)
				++t;
		}
	B[0][0]=m;
	B[0][1]=n;
	B[0][2]=t-1;
	printf("Genera form of matrix \n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
			printf("  %d\t ",A[i][j]);
		printf("\n");
	}
	printf("Sparse matrix : \n");
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			if(A[i][j]!=0)
			{
				B[k][0]=i;
				B[k][1]=j;
				B[k++][2]=A[i][j];
			}
	for(i=0;i<t;++i)
	{
		for(j=0;j<3;++j)
			printf("  %d\t",B[i][j]);
		printf("\n");
	}
	//transposing sparse matrix
	C[0][0]=n;
	C[0][1]=m;
	C[0][2]=t-1;
	k=1;
	for(i=0;i<n;++i)
		for(j=1;j<t;++j)
			if(B[j][1]==i)
			{
				C[k][0]=B[i][1];
				C[k][1]=B[i][0];
				C[k++][2]=B[i][2];
			}
	printf("Transpose of sparse is  :\n");
	for(i=0;i<t;++i)
	{
		for(j=0;j<3;++j)
			printf("  %d\t",B[i][j]);
		printf("\n");
	}

}


