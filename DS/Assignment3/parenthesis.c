//program to implement stack to check correct parenthisation
#include<stdio.h>
#define max 100
struct stack
{
	char S[max];
	int top;
}St;

void PUSH(char);
char POP();
int ISEMPTY();
int ISFULL();
main()
{
	St.top=-1;
	int i,flag=0;
	char str[max],p;
	printf("Enter the Expression to check balanced parenthisation :\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';++i)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
			PUSH(str[i]);
		else if(str[i]==')'||str[i]==']'||str[i]=='}')
		{
			p=POP();
			if((str[i]==')'&&p=='(')||(str[i]=='}'&&p=='{')||(str[i]==']'&&p=='[')
					flag=0;
			else
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		printf("Correctly parenthised\n ");
	else
		printf("Incorrect parenthesis\n ");

			  
}

void PUSH(char item)
{
	if(ISFULL())
	{
		printf("OVERFLOW !! \n");
		return;
	}
	St.S[++St.top]=item;
}
char POP()
{
	if(ISEMPTY())
	{
		printf("UNDERFLOW  !! \n");
		return;
	}
	return(St.S[St.top--]);
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
