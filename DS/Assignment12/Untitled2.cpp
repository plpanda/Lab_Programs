#include<stdio.h>
main()
{
	int *a={1,2,3},*b={4,5,6};
	b=a;
	for(int i=0;i<3;++i)
		printf("%d  %d\n",a[i],b[i]);
}
