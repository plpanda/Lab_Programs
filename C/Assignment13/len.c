#include<stdio.h>
main()
{
	char str[30];
	int len;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	for(len=0;str[len]!='\0';++len);
	printf("\nThe length of the string is %d\n",len);
}

