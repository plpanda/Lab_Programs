#include<stdio.h>
int compare(char[],char[]);
main()
{
	char str1[30],str2[30];
	int flag;	
	printf("Enter a string1 : ");
	scanf("%[^\n]s ",str1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s ",str2);
	flag=compare(str1,str2);
	if(flag==0)
	printf("\nThe strings areb equal\n");
	else
		printf("\n Strings are not equal \n");

}
int compare(char str1[],char str2[])
{

	int cnt,cnt2=0,flag=0;
	for(cnt=0;str1[cnt]!='\0';++cnt);
	for(cnt2=0;cnt2<cnt;++cnt2)
	{
		if(str1[cnt2]!=str2[cnt2])
		{
			flag++;
			break;
		}
	
	}
	return flag;
}
