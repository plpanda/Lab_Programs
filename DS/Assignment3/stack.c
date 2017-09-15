//program to implement stack opertaions
#include<stdio.h>
#define max 100
struct stack
{
	int S[max];
	int top;
}St;

void PUSH(int);
int POP();
void DISPLAY();
int ISEMPTY();
int ISFULL();
main()
{
	St.top=-1;
	char ch='Y';
	int ans,var;
	do
	{
		printf("Choose your operation on stack :\n");
		printf("1. To PUSH\n2. To POP\n3. To DISPLAY\n4. To EXIT\nYOUR ANSWER : ");
		scanf(" %d",&ans);
		switch(ans)
		{
			case 1:printf("PUSH OPERATION \n");
			       printf("Enter the value u want to add to the stack :");
			       scanf("%d",&var);
			       PUSH(var);
			       printf("successfully pushed \n");
			       break;
	
			case 2:printf("POP OPERATION\n");
			       var=POP();
			       printf("%d element successfully POPPED \n",var);
			       break;
			case 3:DISPLAY();
			       break;
			case 4:printf("Thank you \n");
			       break;
			default:printf("Wrong input \n");
				continue;
		}
		printf("Do you want to continue(Y/N) :");
		scanf(" %c",&ch);
	}while(ch=='Y');
}

void PUSH(int item)
{
	if(ISFULL())
	{
		printf("OVERFLOW !! \n");
		return;
	}
	St.S[++St.top]=item;
}
int POP()
{
	if(ISEMPTY())
	{
		printf("UNDERFLOW  !! \n");
		return;
	}
	return(St.S[St.top--]);
}
void DISPLAY()
{
	int i;
	printf("The stack is :\n");
	for(i=St.top;i>=0;--i)
		printf("%d\t",St.S[i]);
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
