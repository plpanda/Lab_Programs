#include<stdio.h>
main()
{
	char str[30],temp,*ptr=str;
	int len,cnt;
	printf("Enter a string : ");
	scanf("%[^\n]s",ptr);
	for(len=0;*(ptr+len)!='\0';++len);
	for(cnt=0;cnt<len/2;++cnt)
	{
		temp=*(ptr+cnt);
		*(ptr+cnt)=*(ptr+len-1-cnt);
		*(ptr+len-1-cnt)=temp;
	}
	
	printf("\nThe reverse of the string is %s\n",str);
}

