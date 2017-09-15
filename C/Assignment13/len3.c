#include<stdio.h>
int length(char[]);
main()
{
	char str[30];
	int len;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	len=length(str);
	printf("\nThe length of the string is %d\n",len);
}
int length(char str[])
{
	int len;	
	for(len=0;str[len]!='\0';++len);
	return len;
}

