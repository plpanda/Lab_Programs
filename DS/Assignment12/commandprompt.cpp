#include<stdio.h>
#include<cstdlib>
int  main()
{
	char str[100];
	while(1)
	{
		printf("Command :>>");
		scanf(" %[^\n]s",str);
		system(str);
	}
	return 0;
}
