#include<stdio.h>
main()
{
	char str1[30],str2[30];
	int cnt=0;
	printf("Enter a string1 : ");
	scanf("%[^\n]s ",str1);
	for(cnt=0;str1[cnt]!='\0';++cnt)
		str2[cnt]=str1[cnt];
	//str2[cnt]='\0';
	printf("\nThe copied string is %s\n",str2);
}

