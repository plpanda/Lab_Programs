#include<stdlib.h>
#include<stdio.h>
main()
{
	float *ptr,max;
	int no,ind;
	printf("Enter the number of books : ");
	scanf("%d",&no);
	ptr=(float*)malloc(no*sizeof(float));
	if(ptr==NULL)
		exit(1);
	for(ind=0;ind<no;++ind)
	{
		printf("Enter the price of book %d : ",ind+1);
		scanf("%f",ptr+ind);
	}
	max=*ptr;
	for(ind=1;ind<no;++ind)
	{
		if(*(ptr+ind)>max)
		{
			max=*(ptr+ind);
		}
	}
	printf("The max is : %f\n",max);
	free(ptr);
}


