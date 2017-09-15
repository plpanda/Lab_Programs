#include<stdio.h>
main()
{
	char str1[30],str2[30],str3[50];
	int cnt,cnt2=0;
	printf("Enter a string1 : ");
	scanf("%[^\n]s",str1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s",str2);
	for(cnt=0;str1[cnt]!='\0';++cnt)
		str3[cnt2++]=str1[cnt];
	for(cnt=0;str2[cnt]!='\0';++cnt)
		str3[cnt2++]=str2[cnt];
	str3[cnt2]='\0';
	printf("\nThe concatenated string is %s\n",str3);
}

