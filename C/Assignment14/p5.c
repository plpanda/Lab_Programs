#include<stdio.h>
struct Employee
{
	char name[30];
	int age;
	float salary;
	char dob[15];
	int empid;
	char address[30];
};
void display(struct Employee);
void get(struct Employee*);
main()
{
	struct Employee e[10];
	int no,ind;
	printf("Enter the no of employees :");
	scanf("%d",&no);
	for(ind=0;ind<no;++ind)
	{
		printf("Employee %d\n",ind+1);
		get(&e[ind]);
	}
	for(ind=0;ind<no;++ind)
	{
		printf("Employee %d\n",ind+1);
		display(e[ind]);
	}
}
void get(struct Employee *e)
{
	printf("Enter the name of the employe :");
	scanf("%s",e->name);
	printf("Enter the age of the employe :");
	scanf("%d",&e->age);
	printf("Enter the salary of the employe :");
	scanf("%f",&e->salary);
	printf("Enter the date of birth of the employe :");
	scanf("%s",e->dob);
	printf("Enter the empid of the employe :");
	scanf("%d",&e->empid);
	printf("Enter the address of the employe :");
	scanf("%s",e->address);
}
void display(struct Employee e)
{
	printf("\n\nName : %s",e.name);
	printf("\nAge : %d",e.age);
	printf("\nSalary : %f",e.salary);
	printf("\nDt of Birth : %s",e.dob);
	printf("\nEmpid : %d",e.empid);
	printf("\nAddress : %s\n",e.address);
}


