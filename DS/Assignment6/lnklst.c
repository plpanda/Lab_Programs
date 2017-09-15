//creation and display of link list using DMA
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node* link;
};
main()
{
	struct Node *start,*ptr;
	char ch;
	start=(struct Node*)malloc(sizeof(struct Node));
	ptr=start;
	ptr->link=NULL;
	while(1)
	{
		printf("Enter the value of node :");
		scanf("%d",&ptr->info);
		printf("Do you want to create another node (Y/N)");
		scanf(" %c",&ch);
		if(ch!='Y')
			break;
		ptr->link=(struct Node*)malloc(sizeof(struct Node));
		ptr=ptr->link;
		ptr->link=NULL;
	}
	printf("\nThe link list is \n ");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d -> ",ptr->info);
		ptr=ptr->link;
	}
}


		
