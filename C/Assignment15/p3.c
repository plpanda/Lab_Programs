#include<stdlib.h>
#include<stdio.h>
main()
{
	int *ptr,max,no,ind,s1;
	printf("Enter the no of numbers : ");
	scanf("%d",&no);
	ptr=(int*)malloc(no*sizeof(int));
	if(ptr==NULL)
		exit(1);
	for(ind=0;ind<no;++ind)
	{
		printf("Enter no  %d : ",ind+1);
		scanf("%d",ptr+ind);
	}
	max=*ptr;
	s1=*ptr;
	for(ind=0;ind<no;++ind)
	{
		if(*(ptr+ind)<s1)
		{
			s1=*(ptr+ind);
		}
		if(*(ptr+ind)>max)
		{
			max=*(ptr+ind);
		}
	}
	for(ind=0;ind<no;++ind)
	{
		if(*(ptr+ind)==s1)
		{
			*(ptr+ind)=max;
		}
	}
	s1=*ptr;
	for(ind=1;ind<no;++ind)
	{
		if(*(ptr+ind)<s1)
		{
			s1=*(ptr+ind);
		}
	}
	
	printf("The max is : %d\nThe sec min is : %d\n",max,s1);
	free(ptr);
}


