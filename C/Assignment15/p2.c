#include<stdlib.h>
#include<stdio.h>
main()
{
	int *ptr,no,ind;
	float avg=0;
	printf("Enter the no of numbers wnat to enter ");
	scanf("%d",&no);
	ptr=(int*)malloc(no*sizeof(int));
	if(ptr==NULL)
		exit(1);
	for(ind=0;ind<no;++ind)
	{
		printf("Enter no %d : ",ind+1);
		scanf("%d",ptr+ind);
	}
	for(ind=1;ind<no;++ind)
	{
		avg+=*(ptr+ind);
	}
	printf("The avg is : %f\n",avg/no);
	free(ptr);
}


