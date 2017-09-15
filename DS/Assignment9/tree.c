//program to implement a bst
#include<stdio.h>
#include<stdlib.h>
struct Tree
{
	int info;
	struct Tree *L,*R;
}*Root,*par,*loc,*ptr;
void search(int item)
{
	if(Root==NULL)
	{
		loc=NULL;
		par=NULL;
		return;
	}
	if(item==Root->info)
	{
		loc=Root;
		par=NULL;
		return;
	}
	else if(item<Root->info)
	{
		ptr=Root->L;
		par=Root;
	}
	else
	{
		ptr=Root->R;
		par=Root;
	}
	while(ptr!=NULL)
	{
		if(ptr->info==item)
		{
			loc=ptr;
			return;
		}
		if(item<ptr->info)
		{
			par=ptr;
			ptr=ptr->L;
		}
		else
		{
			par=ptr;
			ptr=ptr->R;
		}
	}
	loc=NULL;
}
void insert(int item)
{
	search(item);
	if(loc!=NULL)
	{
		printf("DUPLICATE ENTRY !!! ");
		return;
	}
	ptr=(struct Tree*)malloc(sizeof(struct Tree));
	ptr->info=item;
	ptr->L=NULL;
	ptr->R=NULL;
	if(par==NULL)
		Root=ptr;
	else
	{
		if(item>par->info)
			par->R=ptr;
		else
			par->L=ptr;
	}
}
void inOrder(struct Tree *ptr)
{
	if(ptr!=NULL)
	{
		inOrder(ptr->L);
		printf("  %d  ",ptr->info);
		inOrder(ptr->R);
	}
}
void preOrder(struct Tree *ptr)
{
	if(ptr!=NULL)
	{
		printf("  %d  ",ptr->info);
		preOrder(ptr->L);
		preOrder(ptr->R);
	}
}
void postOrder(struct Tree *ptr)
{
	if(ptr!=NULL)
	{
		postOrder(ptr->L);
		postOrder(ptr->R);
		printf("  %d  ",ptr->info);
	}
}
int MIN(struct Tree *T)
{
	if(T->L==NULL)
		return(T->info);
	else
		return(MIN(T->L));
}
int MAX(struct Tree *T)
{
	if(T->R==NULL)
		return(T->info);
	else
		return(MAX(T->R));
}
int height(struct Tree *T)
{
	int l,r;
	if(T==NULL)
		return 0;
	l=height(T->L);
	r=height(T->R);
	if(l>r)
		r=l;
	return(r+1);
}
void CASE_A(struct Tree **loc,struct Tree **par)
{
	struct Tree *child;
	if((*loc)->L==NULL&&(*loc)->R==NULL)
		child=NULL;
	else if((*loc)->L!=NULL)
		child=(*loc)->L;
	else
		child=(*loc)->R;
	if(*par==NULL)
		Root=child;
	else if((*par)->L==(*loc))
		(*par)->L=child;
	else
		(*par)->R=child;
}
void CASE_B()
{
	struct Tree *save,*suc,*parsuc;
	ptr=loc->R;
	save=loc;
	while(ptr->L!=NULL)
	{
		save=ptr;
		ptr=ptr->L;
	}
	suc=ptr;
	parsuc=save;
	CASE_A(&suc,&parsuc);
	if(par==NULL)
		Root=suc;
	else if(par->L==loc)
		par->L=suc;
	else
		par->R=suc;
	suc->L=loc->L;
	suc->R=loc->R;
}
void delete(int item)
{
	search(item);
	if(loc==NULL)
	{
		printf("Item not found ");
		return;
	}
	if(loc->L!=NULL&&loc->R!=NULL)
		CASE_B();
	else
		CASE_A(&loc,&par);
	printf("\n%d deleted\n",loc->info);
	free(loc);
}
main()
{
	int x,n,i;
	char ans;
	printf("Enter the no of elements :");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&x);
		insert(x);
	}
	do
	{
		printf("\nMENU\n1.Insert\n2.Delete\n3.Search\n4.Traversal\n5.MIN\n6.MAX\n7.HEIGHT\nans:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:printf("Enter the element :");
			       scanf("%d",&n);
			       insert(n);
			       break;
			case 2:printf("Enter the element :");
			       scanf("%d",&n);
			       delete(n);
			       break;
			case 3:printf("Enter the element to search ");
			       scanf("%d",&n);
			       search(n);
			       if(loc==NULL)
				       printf("Element not found ");
			       else
				       printf("Element found ");
			       break;
			case 4:printf("Traversal :\nIn order :");
				inOrder(Root);
				printf("\nPre order :");
				preOrder(Root);
				printf("\nPost order :");
				postOrder(Root);
				break;
			case 5:printf("The minimum element is : %d",MIN(Root));
			       break;
			case 6:printf("The maximum element is : %d",MAX(Root));
				break;
			case 7:printf("The height is : %d",height(Root));
				break;
			default:printf("wrong INPUT !!!! ");
				continue;
		}
		printf("\n\nContinue ?(Y/N):");
		scanf(" %c",&ans);
	}while(ans=='Y'||ans=='y');
}







