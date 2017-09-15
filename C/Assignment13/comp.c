#include<stdio.h>
main()
{
	char str1[30],str2[30];
	int cnt,cnt2=0,flag=0;
	printf("Enter a string1 : ");
	scanf("%[^\n]s ",str1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s ",str2);
	for(cnt=0;str1[cnt]!='\0';++cnt);
	for(cnt2=0;cnt2<cnt;++cnt2)
	{
		if(str1[cnt2]!=str2[cnt2])
		{
			flag++;
			break;
		}
	}
	if(flag==0)
	printf("\nThe strings areb equal\n");
	else
		printf("\n Strings are not equal \n");

}

