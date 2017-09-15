/* name:- program to print a pattern
   date ;- 29.09.2015
filename :- pattern4.c              */
#include<stdio.h>
main()
{
	int no,row,col,val=0,col2;
	printf("Enter the number of rows : ");
	scanf("%d",&no);
	for(row=1;row<=no;++row)
	{
		if(row%2!=0)
		{
			
			for(col=1;col<=row;++col)
			{
				printf("%4d",++val);
			}
		}
		else
		{
			val+=row+1;
			for(col2=1;col2<=row;++col2)
			{
				printf("%4d",--val);
			}
			val+=row-1;
		}
		printf("\n");		
	}
}

