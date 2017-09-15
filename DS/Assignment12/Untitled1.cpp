#include<stdio.h>
#include<limits.h>
#define max 20
int swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void Bubble(int A[],int b[],int n)
{
	int p,i;	
	for(p = 0; p<n-1; ++p)
		for(i = 0; i<n-p-1; ++i)
			if(A[i]>A[i + 1])
			{
				swap(&A[i],&A[i+1]);
			}
}
void sort(int a[],int n)
{
	int tmp[max];
	for(int i=0;i<n;++i)
	{
		tmp[i]=1;
		for(int j=i+1;j<n;++j)
		{
			if(a[i]==a[j])
			{
				tmp[i]++;
				if(j!=n-1)
				{
					a[j]=a[n-1];
					n--;
					j--;
				}
			}
		}
	}
	Bubble(tmp,a,n);
	for(int i=0;i<n;++i)
		printf("%d  %d \n",a[i],tmp[i]);	
}
main()
{
	int A[max],i,n;
	printf("Enter the number of integers :");
	scanf("%d",&n);
	printf("Enter the numbers :\n ");
	for(i=0;i<n;++i)
		scanf("%d",&A[i]);
	//**************************************//
	/*
	printf("Sorted array ");
	for(i=0;i<n;++i)
		printf(" %d ",A[i]);
	printf("\n");*/
	sort(A,n);
}



