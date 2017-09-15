#include<stdio.h>
#include<string.h>
#include<time.h>
#include<cstdlib>
#include<iostream>

void delay(unsigned int ms)
{
	clock_t goal=ms+clock();
	while(goal>clock());
}
using namespace std;
int A[5][5]={{0,0,1,0,0},{0,1,0,1,0},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
int B[5][5]={{1,1,1,1,0},{1,0,0,0,1},{1,1,1,1,0},{1,0,0,0,1},{1,1,1,1,0}};
int C[5][5]={{0,1,1,1,1},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{0,1,1,1,1}};
int D[5][5]={{1,1,1,0,0},{1,0,0,1,0},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,0}};
int E[5][5]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1}};
int F[5][5]={{1,1,1,1,1},{1,0,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,0,0,0,0}};
int G[5][5]={{0,1,1,1,1},{1,0,0,0,0},{1,0,1,1,1},{1,0,1,0,1},{0,1,1,0,1}};
int H[5][5]={{1,0,0,0,1},{1,0,0,0,1},{1,1,1,1,1},{1,0,0,0,1},{1,0,0,0,1}};
int I[5][5]={{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,1,1,1,0}};
int J[5][5]={{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{1,0,1,0,0},{0,1,0,0,0}};
int K[5][5]={{1,0,0,1,0},{1,0,1,0,0},{1,1,0,0,0},{1,0,1,0,0},{1,0,0,1,0}};
int L[5][5]={{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{1,1,1,1,0}};
int M[5][5]={{1,0,0,0,1},{1,1,0,1,1},{1,0,1,0,1},{1,0,0,0,1},{1,0,0,0,1}};
int N[5][5]={{1,0,0,0,1},{1,1,0,0,1},{1,0,1,0,1},{1,0,0,1,1},{1,0,0,0,1}};
int O[5][5]={{0,1,1,1,0},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
int P[5][5]={{1,1,1,0,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,0,0,0},{1,0,0,0,0}};
int Q[5][5]={{0,1,1,1,0},{1,0,0,0,1},{1,0,1,0,1},{1,0,0,1,1},{0,1,1,1,1}};
int R[5][5]={{1,1,1,0,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,1,0,0},{1,0,0,1,0}};
int S[5][5]={{0,1,1,1,1},{1,0,0,0,0},{0,1,1,1,0},{0,0,0,0,1},{1,1,1,1,0}};
int T[5][5]={{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0}};
int U[5][5]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,1,1,0}};
int V[5][5]={{1,0,0,0,1},{1,0,0,0,1},{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0}};
int W[5][5]={{1,0,0,0,1},{1,0,0,0,1},{1,0,1,0,1},{1,0,1,0,1},{0,1,0,1,0}};
int X[5][5]={{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0},{0,1,0,1,0},{1,0,0,0,1}};
int Y[5][5]={{1,0,0,0,1},{0,1,0,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,1,0,0}};
int Z[5][5]={{1,1,1,1,1},{0,0,0,1,0},{0,0,1,0,0},{0,1,0,0,0},{1,1,1,1,1}};
int sp[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int hrt[5][5]={{0,1,0,1,0},{1,0,1,0,1},{0,0,0,0,0},{0,1,0,1,0},{0,0,1,0,0}};

int* line(char ch,int i)
{
	switch(ch)
	{
		case 'A':return(A[i]);
					break;
		case 'B':return(B[i]);
					break;
		case 'C':return(C[i]);
					break;
		case 'D':return(D[i]);
					break;
		case 'E':return(E[i]);
					break;
		case 'F':return(F[i]);
					break;
		case 'G':return(G[i]);
					break;
		case 'H':return(H[i]);
					break;
		case 'I':return(I[i]);
					break;
		case 'J':return(J[i]);
					break;
		case 'K':return(K[i]);
					break;
		case 'L':return(L[i]);
					break;
		case 'M':return(M[i]);
					break;
		case 'N':return(N[i]);
					break;
		case 'O':return(O[i]);
					break;
		case 'P':return(P[i]);
					break;
		case 'Q':return(Q[i]);
					break;
		case 'R':return(R[i]);
					break;
		case 'S':return(S[i]);
					break;
		case 'T':return(T[i]);
					break;
		case 'U':return(U[i]);
					break;
		case 'V':return(V[i]);
					break;
		case 'W':return(W[i]);
					break;
		case 'X':return(X[i]);
					break;
		case 'Y':return(Y[i]);
					break;
		case 'Z':return(Z[i]);
					break;
		case ' ':return(sp[i]);
					break;
		case '>':return(hrt[i]);
					break;
	}
}
void rotate(char str[])
{
	char tmp=str[0];
	int i;
	for(i=1;i<strlen(str);++i)
		str[i-1]=str[i];
	str[i-1]=tmp;
}
int main()
{
	char str[50];
	int l,i,*p,j,k;
	scanf("%[^\n]s",str);
	strcat(str,"     ");
	l=strlen(str);
	while(1)
	{
		system("cls");
		rotate(str);
		printf("\n\n\n\n\n");
		for(i=0;i<5;++i)
		{
			for(j=0;j<14;++j)
			{
				p=line(str[j],i);
				for(k=0;k<5;++k)
	 				if(*(p+k)==1)
						printf("* ");
					else
						printf("  ");
				printf(" ");
			}
			printf("\n");
		}
		delay(300);
	}
	return 0;
}
