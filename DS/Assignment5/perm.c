#include<stdio.h>
#include<string.h>
void swap(char *a,char *b)
{
	char c;
	c=*a;
	*a=*b;
	*b=c;
}
void permute(char str[],int l,int u)
{
	int i;
	if(l==u)
		printf("%s\n",str);

	else
	{
		printf("%c\n",str[l]);
		for(i=l;i<=u;++i)
		{
			swap(&str[i],&str[l]);
			permute(str,l+1,u);
			swap(&str[i],&str[l]);
		}
	}
}

main()
{
	char str[100];
	printf("enter a string :");
	scanf("%s",str);
	permute(str,0,strlen(str)-1);
}
