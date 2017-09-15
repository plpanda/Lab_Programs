/* Name - program to print number,square,squareroot,cube
   Date - 15.09.2015
   filename - manip.c     */
#include<stdio.h>
#include<math.h>
main()
{
	int num,sqr,cube,x,y;
	float root;
	printf("Enter any range x to y :");
	scanf("%d%d",&x,&y);
	printf("\nno. \tsqr \tsqrt \tcube \n"); 
	while(x<=y)
	{
		num=x;
		sqr=x*x;
		cube=x*x*x;
		root=sqrt(x);
		++x;
		printf("%d \t%d \t%f \t%d \n",num,sqr,root,cube);
	}
}



	

