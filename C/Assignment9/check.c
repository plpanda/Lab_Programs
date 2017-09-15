/*Name : program to check a character is vowel or consonant
  Date: 06.10.2015
  Filename: check.c              */
#include<stdio.h>
int check(char);
main()
{
	char ch;
	printf("Enter any character :");
	scanf("%c",&ch);
	if(check(ch)==1)
	{
		printf("The character is a vowel\n");
	}
	else
	{
		printf("the character is consonant\n");
	}
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

