/* name:- menu driven program 
date : 15.09.2015
file name - menu.c   */
#include<stdio.h>
main()
{
	int choice,num1,num2;
	float res;
	char ch='y';
	printf("Enter \n1. Addition\n2. Subtraction\n3. multiplication\n4. Division \n5. Modulus\n ");
	while(ch=='y')
	{
		printf("Enter two values ");
		scanf("%d%d",&num1,&num2);
		printf("Enter your choice  ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:res=num1+num2;
			       printf("Sum is %f ",res);
			       break;
			case 2:res=num1-num2;
			       printf("difference is %f ",res);
			       break;
			case 3:res=num1*num2;
			       printf("Product is %f ",res);
			       break;
			case 4:res=num1/num2;
			       printf("division is %f ",res);
			       break;
			case 5:res=num1%num2;
			       printf("Modulus is %f ",res);
			       break;
			default:printf("wrong choice ");

		}
		printf("\nEnter y to continue again :");
		scanf(" %c",&ch);
	}

}
