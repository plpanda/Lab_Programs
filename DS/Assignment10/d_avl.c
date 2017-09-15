#include<stdio.h>
#include<stdlib.h>
struct AVL
{
	int info;
	struct AVL *L,*R;
	int ht;
}*root;

//mAX among 2
int max(int a,int b)
{
	return (a>b)?a:b;
}
//create a new node
struct AVL* create(int info)
{
	struct AVL *node=(struct AVL*)malloc(sizeof(struct AVL));
	node->info=info;
	node->L=NULL;
	node->R=NULL;
	return(node);
}
//calculate height
int height(struct AVL *t)
{
	if(t==NULL)
		return 0;
	return(max(height(t->L),height(t->R))+1);
}
//traversals
void inOrder(struct AVL *ptr)
{
	if(ptr!=NULL)
	{
		inOrder(ptr->L);
		printf("  %d  ",ptr->info);
		inOrder(ptr->R);
	}
}
void preOrder(struct AVL *ptr)
{
	if(ptr!=NULL)
	{
		printf("  %d  ",ptr->info);
		preOrder(ptr->L);
		preOrder(ptr->R);
	}
}
void postOrder(struct AVL *ptr)
{
	if(ptr!=NULL)
	{
		postOrder(ptr->L);
		postOrder(ptr->R);
		printf("  %d  ",ptr->info);
	}
}
//balance factor
int BF(struct AVL *t)
{
	return(height(t->L)-height(t->R));
}



//main subfunctions
struct AVL* RR(struct AVL *t)
{
	struct AVL *y=t->R;
	t->R=y->L;
	y->L=t;
	t->ht=height(t);
	y->ht=height(y);
	return(y);
}
struct AVL* LL(struct AVL *t)
{
	struct AVL *y=t->L;
	t->L=y->R;
	y->R=t;
	t->ht=height(t);
	y->ht=height(y);
	return(y);
}
struct AVL* LR(struct AVL *t)
{
	t->L=RR(t->L);
	t=LL(t);
	return(t);
}
struct AVL* RL(struct AVL *t)
{
	t->R=LL(t->R);
	t=RR(t);
	return(t);
}


//insert function
struct AVL* insert(struct AVL *t,int item)
{
	if(t==NULL)
		t=create(item);
	else if(item>t->info)
	{
		t->R=insert(t->R,item);
		if(BF(t)==-2)
		{
			if(item>(t->R)->info)
				t=RR(t);
			else
				t=RL(t);
		}
	}
	else if(item<t->info)
	{
		t->L=insert(t->L,item);
		if(BF(t)==2)
		{
			if(item<(t->L)->info)
				t=LL(t);
			else
				t=LR(t);
		}
	}
	t->ht=height(t);
	return(t);
}

struct AVL* delete(struct AVL* ,int);
main()
{
	int arr[50],n,i;
	printf("Enter the no of nodes :");
	scanf("%d",&n);
	printf("Enter the node values :\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;++i)
	{
		root=insert(root,arr[i]);
		printf("\n\nInserted %d\n",arr[i]);
		preOrder(root);
	}
	printf("Delete : ");
	scanf("%d",&n);
	root=delete(root,n);
	printf("\n\nTotal AVL Traversal :\nIn order :");
	inOrder(root);
	printf("\nPre order :");
	preOrder(root);
	printf("\nPost order :");
	postOrder(root);
}
int MIN(struct AVL *t)
{
	if(t==NULL)
		return -1;
	if(t->L==NULL)
		return t->info;
	return(MIN(t->L));
}

struct AVL* delete(struct AVL* t,int item)
{
	struct AVL *ptr;
	int x;
	if(t==NULL)
		return t;
	else if(item>t->info)
		t->R=delete(t->R,item);
	else if(item<t->info)
		t->L=delete(t->L,item);
	else if(t->info==item)
	{
		if(t->L==NULL && t->R==NULL)
		{
			printf("\nDeleted %d\n",t->info);
			free(t);
			return NULL;
		}
		else if(t->L==NULL)
		{
			printf("\nDeleted %d\n",t->info);
			ptr=t->R;
			free(t);
			return ptr;
		}
		else if(t->R==NULL)
		{
			ptr=t->L;
			printf("\nDeleted %d\n",t->info);
			free(t);
			return ptr;
		}
		else
		{
			x=MIN(t->R);
			root=delete(root,x);
			t->info=x;
			return t;
		}
	}
	t->ht=height(t);
	if(BF(t)==2)
	{
		if(BF(t->L)==0||BF(t->L)==1)
			t=LL(t);
		else
			t=RR(t);
	}
	else if(BF(t)==-2)
	{
		if(BF(t->R)==0||BF(t->R)==-1)
			t=RR(t);
		else
			t=LL(t);
	}
	return(t);
}

		
		




