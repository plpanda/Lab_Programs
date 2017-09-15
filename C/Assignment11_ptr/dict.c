/* Name:- the array after dictionary sorting
date :-20-10-2015
filename: dict.c           */
#include<stdio.h>
void swap(char[],char[]); // to swap two strings
int compare(char[],char[]); // to compare two strings 
main()
{
	char arr[10][20];
	int cnt,cnt1,no;
	printf("Enter the number of words (max 10) : ");
	scanf("%d",&no);
	//word input
	for(cnt=0;cnt<no;++cnt)
	{
		printf("enter word %d : ",cnt+1);
		scanf(" %s",arr[cnt]);
	}
	//sorting words
	for(cnt=0;cnt<no;++cnt)
	{
		for(cnt1=cnt+1;cnt1<no;++cnt1)
		{
			if(compare(arr[cnt],arr[cnt1]))
			{
				swap(arr[cnt],arr[cnt1]);
			}
		}
	}
	//printing words
	printf("\n After sorting \n ");
	for(cnt=0;cnt<no;++cnt)
	{
		printf("word%d : ",cnt+1);
		printf("%s\n",arr[cnt]);
	}
}
int compare(char str1[],char str2[])
{
	int diff,no=0;
	while(str1[no]!='\0'||str2[no]!='\0')
	{
		diff=str1[no]-str2[no];
		if(diff!=0)
			break;
		++no;
	}
	if(diff<0)
		return 0;
	else 
		return 1;
}
void swap(char str1[],char str2[])
{
	char temp;
	int no;
	for(no=0;no<20;++no)
	{
		temp=str1[no];
		str1[no]=str2[no];
		str2[no]=temp;
	}
}
	
