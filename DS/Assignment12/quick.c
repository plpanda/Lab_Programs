#include<stdio.h>
//#include<limit.h>
#define max 20
int swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void Quick(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(A,p,r);
		Quick(A,p,q-1);
		Quick(A,q+1,r);
	}
}
int Partition(int A[],int p,int r)
{
	int x=A[r],i=p-1,j;
	for(j=p;j<r;++j)
	{
		if(A[j]<=x)
		{
			i=i+1;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i+1],&A[r]);
	return(i+1);
}
main()
{
	int A[max],i,n;
	printf("Enter the number of integers :");
	scanf("%d",&n);
	printf("Enter the numbers :\n ");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	Quick(A,0,n-1);
	printf("Sorted array ");
	for(i=0;i<n;++i)
		printf(" %d ",A[i]);
	printf("\n");
}




