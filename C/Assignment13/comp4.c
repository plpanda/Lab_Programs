#include<stdio.h>
int compare(char*,char*);
main()
{
	char str1[30],str2[30],*ptr1=str1,*ptr2=str2;
	int flag;	
	printf("Enter a string1 : ");
	scanf("%[^\n]s ",ptr1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s ",ptr2);
	flag=compare(ptr1,ptr2);
	if(flag==0)
	printf("\nThe strings areb equal\n");
	else
		printf("\n Strings are not equal \n");

}
int compare(char *ptr1,char *ptr2)
{

	int cnt,cnt2=0,flag=0;
	for(cnt=0;*(ptr1+cnt)!='\0';++cnt);
	for(cnt2=0;cnt2<cnt;++cnt2)
	{
		if(*(ptr1+cnt2)!=*(ptr2+cnt2))
		{
			flag++;
			break;
		}
	
	}
	return flag;
}
