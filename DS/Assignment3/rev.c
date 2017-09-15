//program to implement stack to reverse a string
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
	int i;
	char str[max];
	printf("Enter any string : ");
	scanf("%s",str);
	for(i=0;str[i]!=0;++i)
		PUSH(str[i]);
	i=0;
	while(!ISEMPTY())
	{
		str[i++]=POP();
	}
	str[i]='\0';
	printf("Reverse is : %s\n",str); 


			  
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
