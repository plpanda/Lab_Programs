/* name:- program to print a pattern
   date ;- 29.09.2015
filename :- pattern2.c              */
#include<stdio.h>
main()
{
	int no,row,col;
	printf("Enter the number of rows : ");
	scanf("%d",&no);
	for(row=1;row<=no;++row)
	{
		for(col=1;col<=row;++col)
		{
			printf("%d\t",row);
		}
		printf("\n");
	}
}

