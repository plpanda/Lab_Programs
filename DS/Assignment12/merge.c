#include<stdio.h>
#include<limits.h>
#define max 20
void Combine(int A[],int lb,int mid,int ub)
{
	int n1,n2,B[max],C[max],i,j,p;
	n1=mid-lb+1;
	n2=ub-mid;
	for(i=0;i<n1;++i)
		B[i]=A[lb+i];
	for(i=0;i<n2;++i)
		C[i]=A[mid+i+1];
	B[n1]=INT_MAX;
	C[n2]=INT_MAX;
	i=0;
	j=0;
	for(p=lb;p<=ub;++p)
	{
		if(B[i]<C[j])
		{
			A[p]=B[i];
			i=i+1;
		}
		else
		{
			A[p]=C[j];
			j=j+1;
		}
	}
}
void Merge(int A[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		Merge(A,lb,mid);
		Merge(A,mid+1,ub);
		Combine(A,lb,mid,ub);
	}
}
main()
{
	int A[max],i,n;
	printf("Enter the number of integers :");
	scanf("%d",&n);
	printf("Enter the numbers :\n ");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	Merge(A,0,n-1);
	printf("Sorted array ");
	for(i=0;i<n;++i)
		printf(" %d ",A[i]);
	printf("\n");
}




