/* name:- program to print a pattern
   date ;- 29.09.2015
filename :- pattern8.c              */
#include<stdio.h>
main()
{
	int no,row,col,space;
	printf("Enter the number of rows : ");
	scanf("%d",&no);
	for(row=1;row<=no;++row)
	{
		for(space=no-row;space>0;--space)
		{
			printf("\t");
		}
		for(col=row;col>0;--col)
		{
			printf("%d\t",col);
		}
		printf("\n");
	}
}



