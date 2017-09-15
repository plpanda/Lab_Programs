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
main()
{
	int A[max],i,n,k,item;
	char ch='y';
	printf("Enter the size :");
	scanf("%d",&n);
	printf("Enter the values\n");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	min_build_heap(A,n);
	for(i=0;i<n;++i)
		printf("%d\t",A[i]);
	while(ch=='y'||ch=='Y')
	{
		printf("Enter your operation \n1.INSERT\n2.DELETE\nANS:");
		scanf("%d",&k);
		switch(k)
		{
			case 1:n++;
			       hs++;
			       printf("Enter the key :");
			       scanf("%d",&item);
			       A[n-1]=item;
			       i=n-1;
			       while(A[parent(i)]>A[i] && i>0)
			       {
				       swap(&A[i],&A[parent(i)]);
				       i=parent(i);
			       }
				for(i=0;i<n;++i)
					printf("%d\t",A[i]);
				break;
			case 2:swap(&A[0],&A[n-1]);
			       n--;
			       hs--;
			       printf("Deleted %d\n",A[n]);
			       min_heapify(A,0);
				for(i=0;i<n;++i)
					printf("%d\t",A[i]);
				break;
			default:printf("Wrong input \n");
				continue;
		}
		printf("CONTINUE ?(y/n) :");
		scanf(" %c",&ch);
	}
}





