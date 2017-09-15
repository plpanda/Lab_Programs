
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
			
			for(col=1;col<=no;)
			{
				printf("%d\t",++val);
				++col;
				if(col<=no)
					printf("*\t");

			}
		}
		else
		{
			val+=no+1;
			for(col2=1;col2<=no;)
			{
				printf("%d\t",--val);
				++col2;
				if(col2<=no)
					printf("*\t");
			}
			val+=no-1;
		}
		printf("\n");		
	}
}

