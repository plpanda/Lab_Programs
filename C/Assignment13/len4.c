#include<stdio.h>
int length(char*);
main()
{
	char str[30],*ptr;
	int len;
	ptr=str;
	printf("Enter a string : ");
	scanf("%[^\n]s",ptr);
	len=length(ptr);
	printf("\nThe length of the string is %d\n",len);
}
int length(char *ptr)
{
	int len;	
	for(len=0;*(ptr+len)!='\0';++len);
	return len;
}

