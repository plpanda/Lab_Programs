#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct vertex 
{
	int id,status;
}v[10];
struct Queue
{
	struct vertex *Q[MAX];
	int F,R;
}Q1;
int A[10][10],n;


void Insert(struct vertex *v)
{
	if((Q1.F==Q1.R+1)||(Q1.F==0&&Q1.R==MAX-1))
	{
		printf("OVERFLOW !!\n");
		return;
	}
	if(Q1.F==-1)
	{
		Q1.F=0;
		Q1.R=0;
	}
	else if(Q1.R==MAX-1)
		Q1.R=0;
	else
		Q1.R++;
	Q1.Q[Q1.R]=v;
}
struct vertex* Delete()
{
	struct vertex *ptr;
	if(Q1.F==-1)
	{
		printf("UNDERFLOW !!\n");
		return NULL;
	}
	ptr=Q1.Q[Q1.F];
	if(Q1.F==Q1.R)
	{
		Q1.F=-1;
		Q1.R=-1;
	}
	else if(Q1.F==MAX-1)
		Q1.F=0;
	else
		Q1.F++;
	return ptr;
}
void BFS(struct vertex *x)
{
	int i,j;
	struct vertex *u;
	Insert(x);
	x->status=2;
	while(Q1.F!=-1)
	{
		u=Delete();
		i=u->id-1;
		for(j=0;j<n;++j)
		{
			if(A[i][j]==1&&v[j].status==1)
			{
				Insert(&v[j]);
				v[j].status=2;
			}
		}
		u->status=3;
		printf("  V%d  ",u->id);
	}
	printf("\n");
}
main()
{
	int i,j,a,b;
	char ch;
	Q1.F=-1;
	Q1.R=-1;
	printf("Enter the no of nodes (<10) :");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		v[i].id=i+1;
		v[i].status=1;
	}

	do
	{
		printf("\nEnter edges :\nstarting vrtx id: ");
		scanf("%d",&a);
		printf("ending vertex id: ");
		scanf("%d",&b);
		A[a-1][b-1]=1;
		printf("Add another edge (Y/N) :");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');

	printf("Adjacency matrix :\n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
			printf("  %d  ",A[i][j]);
		printf("\n");
	}
	BFS(&v[0]);

}









