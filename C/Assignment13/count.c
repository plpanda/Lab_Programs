#include<stdio.h>
main()
{
	char str[30];
	int len=0,len2=0;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	for(len=0;str[len]!='\0';++len)
	{
		if(str[len]!=' ')
			++len2;
	}
	printf("\nThe length of the string is %d\nand without spaces is %d\n",len,len2);
}

