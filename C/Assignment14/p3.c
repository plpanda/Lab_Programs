#include<stdio.h>
struct dob
{
	int day;
	char mon[10];
	int year;
};
struct address
{
	int plot;
	char area[20];
	int pin;
};
struct Employee
{
	char name[30];
	int age;
	float salary;
	struct dob dt;
	int empid;
	struct address ad;
};
main()
{
	struct Employee e;
	printf("Enter the name of the employe :");
	scanf("%[^\n]s",e.name);
	printf("Enter the age of the employe :");
	scanf("%d",&e.age);
	printf("Enter the salary of the employe :");
	scanf("%f",&e.salary);
	printf("Enter the date of birth of the employe\nDate :");
	scanf("%d",&e.dt.day);
	printf("Month: ");
	scanf("%s",e.dt.mon);
	printf("Year :");
	scanf("%d",&e.dt.year);
	printf("Enter the empid of the employe :");
	scanf("%d",&e.empid);
	printf("Enter the address of the employe \nPlot :");
	scanf("%d",&e.ad.plot);
	printf("Area :");
	scanf("%s",e.ad.area);
	printf("Pin :");
	scanf("%d",&e.ad.pin);
	printf("\n\nName : %s",e.name);
	printf("\nAge : %d",e.age);
	printf("\nSalary : %f",e.salary);
	printf("\nDt of Birth :%d-%s-%d",e.dt.day,e.dt.mon,e.dt.year);
	printf("\nEmpid : %d",e.empid);
	printf("\nAddress :\n%d\n%s\n%d\n",e.ad.plot,e.ad.area,e.ad.pin);
}


