//program to convert infix to postfix
#include<stdio.h>
#include<string.h>
#define max 100
struct stack
{
	char S[max];
	int top;
}St;
int prty(char);
void PUSH(char);
char POP();
int ISEMPTY();
int ISFULL();
main()
{
	St.top=-1;
	int i,flag=0,j=0;
	char str[max],p,post[max];
	printf("Enter the infix Expression :");
	scanf("%s",str);
	
	PUSH('(');
	i=strlen(str);
	str[i]=')';
	str[++i]='\0';
	for(i=0;str[i]!='\0';++i)
	{
		if(str[i]=='(')
			PUSH(str[i]);
		else if(str[i]==')')
		{
			while(prty(St.S[St.top])!=0)
				post[j++]=POP();
			p=POP();
		}
		else if(str[i]=='^'||str[i]=='/'||str[i]=='*'||str[i]=='+'||str[i]=='-')
		{
			while(prty(St.S[St.top])>=prty(str[i]))
			{
				post[j++]=POP();
			}
			PUSH(str[i]);
		}
		else
			PUSH(str[i]);
	}
	post[j]='\0';
	printf("\nPOSTFIX  %s\n",post);			  
}
int prty(char ch)
{
	if(ch=='(')
		return 0;
	else if(ch=='^')
		return 3;
	else if(ch=='*'||ch=='/')
		return 2;
	else if(ch=='+'||ch=='-')
		return 1;
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
