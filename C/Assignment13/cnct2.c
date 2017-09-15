#include<stdio.h>
main()
{
	char str1[30],str2[30],str3[50],*ptr1,*ptr2,*ptr3;
	ptr1=str1;
	ptr2=str2;
	ptr3=str3;
	int cnt,cnt2=0;
	printf("Enter a string1 : ");
	scanf("%[^\n]s",ptr1);
	printf("Enter a string2 : ");
	scanf(" %[^\n]s",ptr2);
	for(cnt=0;*(ptr1+cnt)!='\0';++cnt)
		*(ptr3+cnt2++)=*(ptr1+cnt);
	for(cnt=0;*(ptr2+cnt)!='\0';++cnt)
		*(ptr3+cnt2++)=*(ptr2+cnt);
	*(ptr3+cnt2)='\0';
	printf("\nThe concatenated string is %s\n",ptr3);
}

