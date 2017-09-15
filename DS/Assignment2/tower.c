//solving tower of hanoi problem
#include<stdio.h>
void tower(char a,char b,char c,int n)
{
	if(n==1)
		printf("%c -> %c\n",a,c);
	else
	{
		tower(a,c,b,n-1);
		printf("%c -> %c\n",a,c);
		tower(b,a,c,n-1);
	}
}
main()
{
	int n;
	printf("Tower of Hanoi problem\n");
	printf("Enter the no of discs :");
	scanf("%d",&n);
	printf("Solution if pegs are A, B, c \n");
	tower('A','B','C',n);
}
