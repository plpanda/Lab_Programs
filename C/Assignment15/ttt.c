#include<stdio.h>
#include<stdlib.h>
int chk(char [][3],char*);
int get();
main()
{
	char tbl[3][3],p1='X',p2='O',ch;
	int r,c,g;
	for(r=0;r<3;++r)
		for(c=0;c<3;++c)
			tbl[r][c]=' ';
	for(g=0;;g++)
	{
		for(r=0;r<3;++r)
		{
			for(c=0;c<3;++c)
			{
				if(tbl[r][c]==' ')
					printf("_\t");
				else
					printf("%c\t",tbl[r][c]);
			}
			printf("\n");
		}
		if(chk(tbl,&ch)==1)
			break;
A:
		if(g%2==0)
		{
			printf("Player 1 :\nEnter row :");
			r=get();
			printf("Enter col :");
			c=get();
			if(tbl[r-1][c-1]!=' ')
			{
				printf("Wrong input \n");
				goto A;
			}
			tbl[r-1][c-1]=p1;
		}
		else
		{
			printf("Player 2 :\nEnter row :");
			r=get();
			printf("Enter col :");
			c=get();
			if(tbl[r-1][c-1]!=' ')
			{
				printf("Wrong input \n");
				goto A;
			}
			tbl[r-1][c-1]=p2;
		}
		if(g==9&&!chk(tbl,&ch))
		{
			printf("Match draw ");
			scanf("%c",&ch);
			exit(0);
		}
	}
	if(ch==p1)
		printf("Player 1 wins ");
	else if(ch==p2)
		printf("Player 2 wins ");
}

int get()
{
	int no;
	do
	{
		scanf("%d",&no);
		if(no<=3&&no>0)
			return no;
		else
			printf("Wrong input,Enter again ");
	}while(1);
}
int chk(char tbl[][3],char *ch)
{
	int r,c;
	for(r=0;r<3;++r)
	{
		if(tbl[r][0]==tbl[r][1]&&tbl[r][1]==tbl[r][2]&&(tbl[r][0]=='X'||tbl[r][0]=='O'))
		{
			*ch=tbl[r][0];
			return 1;
		}
	}
	for(c=0;c<3;++c)
	{
		if(tbl[0][c]==tbl[1][c]&&tbl[1][c]==tbl[2][c]&&(tbl[0][c]=='X'||tbl[0][c]=='O'))
		{
			*ch=tbl[0][c];
			return 1;
		}
	}
	if(tbl[0][0]==tbl[1][1]&&tbl[1][1]==tbl[2][2]&&(tbl[1][1]=='X'||tbl[1][1]=='O'))
	{
		*ch=tbl[0][0];
		return 1;
	}
	if(tbl[0][2]==tbl[1][1]&&tbl[1][1]==tbl[2][0]&&(tbl[1][1]=='X'||tbl[1][1]=='O'))
	{
		*ch=tbl[1][1];
		return 1;
	}
	*ch=' ';
	return 0;
}

	



