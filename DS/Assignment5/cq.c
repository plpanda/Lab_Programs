//implementation of queue using circular queue
#include<stdio.h>
#define MAX 100
struct Queue
{
	int Q[MAX];
	int F,R;
}Q1;

//FUNCTION PROTOTYPE DECLARATION
void Insert(int);
int Delete();
void Traverse();

//MAIN FUNCTION
main()
{

	char ch;
	int ans,var;
	Q1.F=-1;
	Q1.R=-1;
	do
	{
		printf("Choose your operation on Queue :\n");
		printf("1. To INSERT\n2. To DELETE\n3. To DISPLAY\nYOUR ANSWER : ");
		scanf(" %d",&ans);
		switch(ans)
		{
			case 1:printf("INSERTION \n");
			       printf("Enter the value u want to add to the QUEUE :");
			       scanf("%d",&var);
			       Insert(var);
			       break;
	
			case 2:printf("DELETION\n");
			       var=Delete();
			       if(var!=-1)
			       		printf("%d Element successfully DELETED \n",var);
			       break;

			case 3:Traverse();
			       break;

			default:printf("Wrong input \n");
				continue;
		}
		printf("Do you want to continue(Y/N) :");
		scanf(" %c",&ch);
	}while(ch=='Y');

}

//FUNCTION DEFINATION
/* insert the item to the circular queue */

void Insert(int item)
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
	Q1.Q[Q1.R]=item;
}
/* delete element from the circular queue and return it in item */

int Delete()
{
	int item;
	if(Q1.F==-1)
	{
		printf("UNDERFLOW !!\n");
		return -1;
	}
	item=Q1.Q[Q1.F];
	if(Q1.F==Q1.R)
	{
		Q1.F=-1;
		Q1.R=-1;
	}
	else if(Q1.F==MAX-1)
		Q1.F=0;
	else
		++Q1.F;
	return item;
}
/* function to display all elements in the queue */

void Traverse()
{
	int i=Q1.F-1;
	printf("\nElements of queue are :\n");
	do
	{
		++i;
		printf("%d\t",Q1.Q[i]);
		if(i==MAX-1)
			i=-1;
	}while(i!=Q1.R);
}


