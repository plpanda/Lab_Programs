#include<stdio.h>
int search(char[],char[]);
main()
{
	char str1[30],str2[30];
	int flag;	
	printf("Enter a string1 : ");
	scanf("%[^\n]s ",str1);
	printf("Enter a sub string : ");
	scanf(" %[^\n]s ",str2);
	flag=search(str1,str2);
	if(flag==0)
	printf("\nThe sub string is found\n");
	else
		printf("\nSub String  not found \n");

}
int search(char str1[],char str2[])
{

	int cnt2=0,cnt3=0,cnt4,flag=1;
	for(cnt2=0;str1[cnt2]!='\0';++cnt2)
	{
		cnt3=0;
		if(str1[cnt2]==str2[cnt3])
		{
			cnt4=cnt2;
			while(str2[cnt3]!='\0'&&str2[cnt3]==str1[cnt4])
			{
				++cnt3;
				++cnt4;
			}
			if(str2[cnt3]=='\0')
				return 0;
		}
	
	}
	return flag;
}
