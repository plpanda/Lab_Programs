//creation and display of link list using DMA
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node* link;
}*start,*ptr;

struct Node* Create();
void Display();
//insertion functions
void Insert_Beg(int);
void Insert_End(int);
void Insert_Ele(int,int);
void Insert_Pos(int,int);
//deletion functions
int Delete_Beg();
int Delete_End();
int Delete_Ele(int);
int Delete_Pos(int);

main()
{
	char ch;
	int ans,value,pos;
	do
	{
		printf("\nMain Menu\nEnter Operation\n1.Create\n2.Insert\n3.Delete\n4.Display\n ANS :");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:start=Create();
			       printf("\n");
			       break;
			case 2:printf("\nInsertion\n");
			       printf("1.In begning\n2.In End\n3.After element\n4.In location\nAnswer:");
			       scanf("%d",&ans);
			       printf("Enter the element to be inserted ");
                               scanf("%d",&value);
			       switch(ans)
			       {
				       case 1:Insert_Beg(value);
					       break;
					case 2:Insert_End(value);
					       break;
					case 3:printf("Enter the element after which u want to insert ");
					       scanf("%d",&pos);
					       Insert_Ele(pos,value);
					       break;
					case 4:printf("Enter the position :");
					       scanf("%d",&pos);
					       Insert_Pos(pos,value);
					       break;
					default:printf("Wrong Input\n");
			       }
				break;
			case 3:printf("\nDeletion\n");
			       printf("1.Begning NODE\n2.End NODE\n3.Given Element\n4.Given Location\nAnswer:");
                               scanf("%d",&ans);
                               switch(ans)
                               {
                                       case 1:value=Delete_Beg();
                                              break;
                                       case 2:value=Delete_End();
                                              break;
                                       case 3:printf("Enter the element to delete ");
					      scanf("%d",&pos);
					      value=Delete_Ele(pos);
                                              break;
                                       case 4:printf("Enter the location to delete ");
					      scanf("%d",&pos);
					      value=Delete_Pos(pos);
                                              break;
                                       default:printf("Wrong Input\n");
                               }
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

int Delete_End()
{
	int val;
	struct Node* prev;
	ptr=start;
	prev=start;
	if(start==NULL)
	{
		printf("UNDERFLOW!!!!! ");
		return -1;
	}
	while(ptr->link!=NULL)
	{
		prev=ptr;
		ptr=ptr->link;
	}
	if(ptr==start)
		start=NULL;
	else
		prev->link=NULL;
	val=ptr->info;
	free(ptr);
	return val;
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
	start=start->link;
	val=ptr->info;
	free(ptr);
	return(val);
}
int Delete_Ele(int ele)
{
	int val;
	struct Node* prev;
	prev=start;
	ptr=start;
	if(start==NULL)
	{
		printf("UNDERFLOW!!!!!! ");
		return -1;
	}
	while(ptr!=NULL)
	{
		if(ptr->info==ele)
			break;
		prev=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("Element not found to delete ");
		return -1;
	}
	if(ptr==start)
		start==NULL;
	else
		prev->link=ptr->link;
	val=ptr->info;
	free(ptr);
	return(val);
}
int Delete_Pos(int pos)
{
	struct Node* prev;
	int cnt=1,val;
	ptr=start;
	prev=start;
	if(start==NULL)
	{
		printf("UNDERFLOW!!!!!! ");
		return -1;
	}
	while(ptr!=NULL&&cnt<pos)
	{
		cnt++;
		prev=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("Position not found to delete ");
		return -1;
	}
	if(ptr==start)
		start=start->link;
	else
		prev->link=ptr->link;
	val=ptr->info;
	free(ptr);
	return(val);
}
void Insert_Pos(int pos,int item)
{
	int cnt=0;
	struct Node* new;
	new=(struct Node*)malloc(sizeof(struct Node));
	new->info=item;
	if(pos==1)
	{
		new->link=start;
		start=new;
		return;
	}
	ptr=start;
	while(ptr!=NULL)
	{
		cnt++;
		if(cnt+1==pos)
			break;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("Element cannot be inserted at this position\n ");
		return;
	}
	new->link=ptr->link;
	ptr->link=new;
}
void Insert_Ele(int ele,int item)
{
	struct Node* new;
	new=(struct Node*)malloc(sizeof(struct Node));
	new->info=item;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->info==ele)
			break;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("Element not found.. No insertion \n");
		return;
	}
	new->link=ptr->link;
	ptr->link=new;
}
void Insert_Beg(int item)
{
	ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->info=item;
	if(start==NULL)
	{
		start=ptr;
		start->link=NULL;
		return;
	}
	ptr->link=start;
	start=ptr;
}
void Insert_End(int item)
{
	ptr=start;
	if(ptr==NULL)
	{
		start=(struct Node*)malloc(sizeof(struct Node));
		start->link=NULL;
		start->info=item;
		return;
	}
	while(ptr->link!=NULL)
		ptr=ptr->link;
	ptr->link=(struct Node*)malloc(sizeof(struct Node));
	ptr=ptr->link;
	ptr->link=NULL;
	ptr->info=item;
}
void Display()
{
	printf("\nThe link list is \n ");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d -> ",ptr->info);
		ptr=ptr->link;
	}
	printf("NULL\n");
}
struct Node* Create()
{
	struct Node *str,*p;
	char ch;
	str=(struct Node*)malloc(sizeof(struct Node));
	p=str;
	p->link=NULL;
	while(1)
	{
		printf("Enter the value of node :");
		scanf("%d",&p->info);
		printf("Do you want to create another node (Y/N)");
		scanf(" %c",&ch);
		if(ch!='Y')
			break;
		p->link=(struct Node*)malloc(sizeof(struct Node));
		p=p->link;
		p->link=NULL;
	}
	return str;
}


		
