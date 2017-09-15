#include<stdio.h>
#include<stdlib.h>
#define max 10

struct stack
{
	struct vertex *S[max];
	int top;
}St;

struct vertex 
{
	int id,status;
}v[10];
int A[10][10],n;



void PUSH(struct vertex *item)
{
	if(ISFULL())
	{
		printf("OVERFLOW !! \n");
		return;
	}
	St.S[++St.top]=item;
}
struct vertex* POP()
{
	int top;
	if(ISEMPTY())
	{
		printf("UNDERFLOW  !! \n");
		return;
	}
	top=St.top;
	St.top--;
	return(St.S[top]);
}
int ISEMPTY()
{
	if(St.top==-1)
		return 1;
	else
		return 0;
}
int ISFULL()
{
	if(St.top==max-1)
		return 1;
	else
		return 0;
}

void DFS(struct vertex *x)
{
	int i,j;
	struct vertex *u;
	PUSH(x);
	x->status=2;
	while(!ISEMPTY())
	{
		u=POP();
		i=u->id-1;
		for(j=n;j>0;--j)
		{
			if(A[i][j]==1&&v[j].status==1)
			{
				PUSH(&v[j]);
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
	St.top=-1;
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
	DFS(&v[0]);

}









