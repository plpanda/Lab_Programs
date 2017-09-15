#include<stdio.h>
#define max 20
int hs;
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void min_heapify(int A[],int i)
{
	int l=(2*i)+1,r=(2*i)+2,large;

	if(l<hs && A[l]<A[i])
		large=l;
	else
		large=i;

	if(r<hs && A[r]<A[large])
		large=r;

	if(i!=large)
	{
		swap(&A[i],&A[large]);
		min_heapify(A,large);
	}
}
void min_build_heap(int A[],int n)
{
	int i;
	hs=n;
	for(i=(n-2)/2;i>=0;--i)
		min_heapify(A,i);
}
int parent(int k)
{
	return((k-1)/2);
}
int k_min(int A[],int k,int n)
{
	int i,j;
	min_build_heap(A,n);
	for(j=1;j<k;++j)
	{
		i=n-j;
		swap(&A[i],&A[0]);
		hs--;
		min_heapify(A,0);
	}
	return(A[0]);
}

main()
{
	int A[max],i,n,k;
	printf("Enter the size :");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);

	for(i=0;i<n;++i)
		printf("%d\t",A[i]);
	printf("Enter k :");
	scanf("%d",&k);
	printf("\t%d\n",k_min(A,k,n));
}


