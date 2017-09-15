#include<stdio.h>
#include<stdio.h>
#include<limits.h>
#define max 100000
#include<stdlib.h>
#include<time.h>
void Bubble(long long int A[],long long int n)
{
	long long int p,i;	
	for(p = 0; p<n-1; ++p)
		for(i = 0; i<n-p-1; ++i)
			if(A[i]>A[i + 1])
				swap(&A[i],&A[i+1]);
}
void Combine(long long int A[],long long int lb,long long int mid,long long int ub)
{
	long long int n1,n2,i,j,p,*B,*C;
	n1=mid-lb+1;
	n2=ub-mid;
	B=(long long int*)malloc((n1+2)*sizeof(long long int));
	C=(long long int*)malloc((n2+2)*sizeof(long long int));
	for(i=0;i<n1;++i)
		*(B+i)=A[lb+i];
	for(i=0;i<n2;++i)
		*(C+i)=A[mid+i+1];
	*(B+n1)=INT_MAX;
	*(C+n2)=INT_MAX;
	i=0;
	j=0;
	for(p=lb;p<=ub;++p)
	{
		if(*(B+i)<*(C+j))
		{
			A[p]=*(B+i);
			i=i+1;
		}
		else
		{
			A[p]=*(C+j);
			j=j+1;
		}
	}
	free(B);
	free(C);
}
void Merge(long long int A[],long long int lb,long long int ub)
{
	long long int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		Merge(A,lb,mid);
		Merge(A,mid+1,ub);
		Combine(A,lb,mid,ub);
	}
}
int swap(long long int *a,long long int *b)
{
	long long int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void Quick(long long int A[],long long int p,long long int r)
{
	long long int q;
	if(p<r)
	{
		q=Partition(A,p,r);
		Quick(A,p,q-1);
		Quick(A,q+1,r);
	}
}
int Partition(long long int A[],long long int p,long long int r)
{
	long long int x=A[r],i=p-1,j,temp;
	for(j=p;j<r;++j)
	{
		if(A[j]<=x)
		{
			i++;
			swap(&A[i],&A[j]);
			/*temp=A[i];
			A[i]=A[j];
			A[j]=temp;*/
		}
	}
	swap(&A[i+1],&A[r]);
	/*temp=A[i+1];
	A[i+1]=A[r];
	A[r]=temp;*/
	return(i+1);
}
main()
{
	long long int A[max],B[max],C[max],k,i;
	double s1,s2,s3;
	clock_t t1,t2,t3;
	srand(time(NULL));
	for(i=0;i<max;++i)
	{
		k=rand()%max+1;
		A[i]=k;
		B[i]=k;
		C[i]=k;
	}
	
	t1=clock();
	Bubble(A,max);
	t1=clock()-t1;
	
	t2=clock();
	Merge(B,0,max-1);
	t2=clock()-t2;

	t3=clock();
	Quick(C,0,max-1);
	t3=clock()-t3;
	
	s1=((double)t1)/CLOCKS_PER_SEC;
	s2=((double)t2)/CLOCKS_PER_SEC;
	s3=((double)t3)/CLOCKS_PER_SEC;
	
	/*for(i=0;i<max;++i)
		printf("%lld ",A[i]);
	printf("\n");
	for(i=0;i<max;++i)
		printf("%lld ",B[i]);
	printf("\n");
	for(i=0;i<max;++i)
		printf("%lld ",C[i]);
	printf("\n");*/
	printf("Bubble: %f\nMerge: %f\nQuick: %f\n",s1,s2,s3);
}




#define max 20
int hs;
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void max_heapify(int A[],int i)
{
	int l=(2*i)+1,r=(2*i)+2,large;

	if(l<hs && A[l]>A[i])
		large=l;
	else
		large=i;

	if(r<hs && A[r]>A[large])
		large=r;

	if(i!=large)
	{
		swap(&A[i],&A[large]);
		max_heapify(A,large);
	}
}
void max_build_heap(int A[],int n)
{
	int i;
	hs=n;
	for(i=(n-2)/2;i>=0;--i)
		max_heapify(A,i);
}
void heap_sort(int A[],int n)
{
	int i;
	max_build_heap(A,n);
	for(i=n-1;i>=1;--i)
	{
		swap(&A[i],&A[0]);
		hs--;
		max_heapify(A,0);
	}
}
main()
{
	int A[max],i,n;
	printf("Enter the size :");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	heap_sort(A,n);
	for(i=0;i<n;++i)
		printf("%d\t",A[i]);
}





