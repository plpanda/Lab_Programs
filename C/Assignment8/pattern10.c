
/* name:- program to print a pattern
   date ;- 29.09.2015
filename :- pattern9.c              */
#include<stdio.h>
main()
{
	int no,row,col,space,col2;
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
		for(col2=2;col2<=row;++col2)
		{
			printf("%d\t",col2);
		}
		printf("\n");
	}
	no--;
	for(row=1;row<=no;++row)
	{
		for(space=1;space<=row;++space)
		{
			printf("\t");
		}
		for(col=no-row+1;col>0;--col)
		{
			printf("%d\t",col);
		}
		for(col2=2;col2<=no-row+1;++col2)
		{
			printf("%d\t",col2);
		}
		printf("\n");
	}
}

