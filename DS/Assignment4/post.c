//program to convert infix to postfix
#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 100
struct stack
{
	int S[max];
	int top;
}St;
void PUSH(int);
int POP();
int ISEMPTY();
int ISFULL();
main()
{
	St.top=-1;
	int i=-1,a,b;
	char str[max],p;
	printf("Enter the postfix Expression without values :");
	scanf("%s",str);

	for(i=0;str[i]!='\0';++i)
	{
		if(str[i]=='^'||str[i]=='/'||str[i]=='*'||str[i]=='+'||str[i]=='-')
		{
			b=POP();
			a=POP();
			switch(str[i])
			{
				case '^':a=pow(a,b);
		 			break;
				case '/':a=a/b;
					break;
				case '*':a=a*b;
					 break;
				case '+':a=a+b;
					 break;
				case '-':a=a-b;
					 break;
			}
			PUSH(a);
		}
		else
		{
			printf("value of %c is : ",str[i]);
			scanf("%d",&a);
			PUSH(a);
		}
	}
	printf("\nEvaluated string is  %d\n",POP());			  
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
