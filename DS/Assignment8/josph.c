//program to solve JOSEPHUS problerm
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	char info;
	struct Node *link;
}*start,*ptr,*temp;
main()
{
	int max,i,k,l;
	char ch='A';
	printf("\nENTER THE NO OF ITEMS :");
	scanf("%d",&max);
	start=(struct Node*)malloc(sizeof(struct Node));
	start->link=NULL;
	ptr=start;
	for(i=0;i<max;++i)
	{
		ptr->link=(struct Node*)malloc(sizeof(struct Node));
		ptr=ptr->link;
		ptr->info=ch+i;
		ptr->link=start;
	}
	ptr=start->link;
	printf("START ");
	while(ptr!=start)
	{
		printf("%c -> ",ptr->info);
		ptr=ptr->link;
	}
	printf("START \n");

	//positioning 
	srand(time(NULL));
	l=rand()%max+1;
	ptr=start->link;
	for(i=1;i<l-1;++i)
	{
		if(ptr->link==start)
			ptr=start->link;
		else
			ptr=ptr->link;
	}
	printf("\nSTARTING FROM --- >>  %c\n",ptr->info);
	srand(time(NULL));
	k=rand()%max+1;
	printf("\nTHE VALUE OF k is : %d\n ",k);

	//start of algorithm
	while((start->link)->link!=start)
	{
		for(i=1;i<k-1;++i)
		{
			if(ptr->link==start)
				ptr=start->link;
			else
				ptr=ptr->link;
		}
		if(ptr->link==start)
		{
			temp=start->link;
			start->link=temp->link;
			ptr=start->link;
		}
		else
		{
			temp=ptr->link;
			ptr->link=temp->link;
			if(ptr->link==start)
				ptr=start->link;
			else
				ptr=ptr->link;
		}
		printf("\t%c",temp->info);
		free(temp);
	}
	printf("\nWINNER : %c\n\n",(start->link)->info);
}
