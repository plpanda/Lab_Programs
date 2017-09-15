//queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *link;
}*rear,*front,*ptr;
void Q_Insert(int item)
{
	ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->info=item;
	ptr->link=NULL;
	if(front==NULL)
	{
		front=ptr;
		rear=ptr;
	}
	else
		rear->link=ptr;
}
int Q_Delete()
{
	int item;
	if(front==NULL)
	{
		printf("UNDERFLOW !! ");
		return -1;
	}
	ptr=front;
	front=front->link;
	item=ptr->info;
	if(front==NULL)
		rear=NULL;
	free(ptr);
	return(item);
}
void Display()
{
	ptr=front;
	printf("\n\n-->  ");
	while(ptr!=NULL)
	{
		printf("%d ->  ",ptr->info);
		ptr=ptr->link;
	}
	printf("NULL \n");
}
main()
{
	int ans,val;
	char ch;
	front=NULL;
	rear=NULL;
	do
	{
		printf("\nMENU\n1.INSERT\n2.DELETE\n3.DISPLAY\nAns:");
		scanf("%d",&ans);
		switch(ans)
		{
			case 1:printf("Enter the element to insert :");
			       scanf("%d",&val);
			       Q_Insert(val);
			       break;
			case 2:val=Q_Delete();
			       if(val!=-1)
				       printf("%d is deleted ",val);
			       break;
			case 3:Display();
			       break;
			default:printf("Wrong Input ");
				continue;
		}
		printf("Continue ?? (Y/N) : ");
		scanf(" %c",&ch);
	}while(ch=='Y');
}


