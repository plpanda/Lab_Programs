/*Name:- find the no of vowels in the character array
date :-20-10-2015
filename: chk.c           */
#include<stdio.h>
int check(char);
main()
{
	int cnt,sum=0,size;
	char arr[20],*ptr;
	ptr=arr;
	printf("Enter the size of an array ;");
	scanf("%d",&size);
	printf("\n Enter the char values of the array :");
	for(cnt=0;cnt<size;++cnt)
	{
		scanf(" %c",ptr+cnt);
	}
	for(cnt=0;cnt<size;++cnt)
	{
		if(check(*(ptr+cnt)))
		{
			sum++;
		}	
	}
	printf("\nthe number of vowels is %d\n",sum);
}

int check(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':return 1;
			 break;
		default: return 0;
	}
}

