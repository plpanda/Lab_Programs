//creation and display of double link list using DMA
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next,*prev;
}*start,*ptr;

struct Node* Create();
void Display();
//insertion functions
void Insert_Beg(int);
//deletion functions
int Delete_Beg();
int Delete_End();



main()
{
	char ch;
	int ans,value,pos;
	do
	{
		printf("\nMain Menu\nEnter Operation\n1.Create\n2.Insert\n3.Delete\n4.Display\nANS :");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:start=Create();
			       printf("\n");
			       break;
			case 2:printf("\nInsertion\n");
			       printf("Enter the element to be inserted ");
                               scanf("%d",&value);
				Insert_Beg(value);
			       break;
			case 3:printf("\nDeletion\n");
			      // value=Delete_Beg();
			       value=Delete_End();
                               if(value!=-1)
				       printf("\n%d is deleted\n",value);
              			break;
			case 4:Display();
			       break;
			default:printf("Wrong Input \n");
				continue;
		}
		printf("Do you want to continue (Y/N):");
		scanf(" %c",&ch);
	}while(ch=='Y');
}
int Delete_Beg()
{
	int val;
	ptr=start;
	if(start==NULL)
	{
		printf("UNDERFLOW!!!!! ");
		return -1;
	}
	start=start->next;
	start->prev=NULL;
	val=ptr->info;
	free(ptr);
	return(val);
}
void Insert_Beg(int item)
{
	ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->info=item;
	ptr->prev=NULL;
	if(start==NULL)
	{
		start=ptr;
		start->next=NULL;
		return;
	}
	ptr->next=start;
	start=ptr;
}
void Display()
{
	printf("\nThe link list is \nNULL  ");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d  <-->  ",ptr->info);
		ptr=ptr->next;
	}
	printf("NULL\n");
}
struct Node* Create()
{
	struct Node *str,*p;
	char ch;
	str=(struct Node*)malloc(sizeof(struct Node));
	p=str;
	p->next=NULL;
	p->prev=NULL;
	while(1)
	{
		printf("Enter the value of node :");
		scanf("%d",&p->info);
		printf("Do you want to create another node (Y/N)");
		scanf(" %c",&ch);
		if(ch!='Y')
			break;
		p->next=(struct Node*)malloc(sizeof(struct Node));
		(p->next)->next=NULL;
		(p->next)->prev=p;
		p=p->next;
	}
	return str;
}
int Delete_End()
{
	int val;
	ptr=start;
	if(start==NULL)
	{
		printf("UNDERFLOW!!!!! ");
		return -1;
	}
	while(ptr->next!=NULL)
		ptr=ptr->next;
	if(ptr==start)
		start=NULL;
	else
		(ptr->prev)->next=NULL;
	val=ptr->info;
	free(ptr);
	return val;
}


		
