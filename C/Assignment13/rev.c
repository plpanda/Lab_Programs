#include<stdio.h>
main()
{
	char str[30],temp;
	int len,cnt;
	printf("Enter a string : ");
	scanf("%[^\n]s",str);
	for(len=0;str[len]!='\0';++len);
	for(cnt=0;cnt<len/2;++cnt)
	{
		temp=str[cnt];
		str[cnt]=str[len-1-cnt];
		str[len-1-cnt]=temp;
	}
	
	printf("\nThe reverse of the string is %s\n",str);
}

