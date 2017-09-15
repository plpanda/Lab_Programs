#include<stdio.h>
main()
{
	char str[30],*ptr;
	int len=-1;
	ptr=str;
	printf("Enter a string : ");
	scanf("%[^\n]s",ptr);
	while(*(ptr+ ++len)!='\0');
//	for(len=0;*(ptr+len)!='\0';++len);
	printf("\nThe length of the string is %d\n",len);
}

