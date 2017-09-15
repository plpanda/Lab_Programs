//program to convert infix to prefix
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
	char str[max],p,pre[max];
	printf("Enter the infix Expression :");
	scanf("%s",pre);
	PUSH(')');
	str[0]='(';
	for(i=0;pre[i]!='\0';++i)
		str[i+1]=pre[i];
	str[i+1]='\0';


	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==')')
			PUSH(str[i]);
		else if(str[i]=='(')
		{
			while(prty(St.S[St.top])!=0)
				pre[j++]=POP();
			p=POP();
		}
		else if(str[i]=='^'||str[i]=='/'||str[i]=='*'||str[i]=='+'||str[i]=='-')
		{
			while(prty(St.S[St.top])>prty(str[i]))
			{
				pre[j++]=POP();
			}
			PUSH(str[i]);
		}
		else
			pre[j++]=str[i];			
	}
	pre[j]='\0';
        printf("\n%s\n",pre);	
	for(i=0;i<strlen(pre);++i)
		str[i]=pre[--j];
	str[i]=0;
	printf("\nPREFIX  %s\n",str);			  
}
int prty(char ch)
{
	if(ch==')')
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
