#include<stdio.h>
void cnct(char[],char[],char[]);
main()
{
	char str1[30],str2[30],str3[50];
	printf("Enter a string1 : ");
	scanf("%[^\n]s",str1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s",str2);
	cnct(str1,str2,str3);
	printf("\nThe concatenated string is %s\n",str3);
}
void cnct(char str1[],char str2[],char str3[])
{
	int cnt,cnt2=0;
	for(cnt=0;str1[cnt]!='\0';++cnt)
		str3[cnt2++]=str1[cnt];
	for(cnt=0;str2[cnt]!='\0';++cnt)
		str3[cnt2++]=str2[cnt];
	str3[cnt2]='\0';

}

