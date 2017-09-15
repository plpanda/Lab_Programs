//polynomial addition
#include<stdio.h>
#include<stdlib.h>
struct Poly
{
	int exp,cof;
	struct Poly* link;
}*poly1,*poly2,*poly3,*ptr,*ptr2,*ptr3;

struct Poly* Create();
void Display(struct Poly*);
void Add_poly();
void Multiplication();
void Reverse(struct Poly** start)
{
	struct Poly *nxt,*prv;
	nxt=*start;
	ptr=NULL;
	while(nxt!=NULL)
	{
		prv=ptr;
		ptr=nxt;
		nxt=nxt->link;
		ptr->link=prv;
	}
	*start=ptr;
}
main()
{
	printf("Enter polynomial 1\n");
	poly1=Create();
	printf("Enter polynomial 2\n");
	poly2=Create();
	Multiplication();

	Reverse(&poly1);
	Reverse(&poly2);
	Reverse(&poly3);

	printf("Poly 1 :");
	Display(poly1);
	printf("Poly 2 :");
	Display(poly2);
	printf("Product is :");
	Display(poly3);
}
void Multiplication()
{
	int exp,cof;
	struct Poly *p;
	ptr=poly1;
	while(ptr!=NULL)
	{
		ptr2=poly2;
		while(ptr2!=NULL)
		{
			exp=ptr->exp+ptr2->exp;
			cof=ptr->cof*ptr2->cof;
			ptr2=ptr2->link;
			if(poly3==NULL)
			{
				poly3=(struct Poly*)malloc(sizeof(struct Poly));
				ptr3=poly3;
				ptr3->link=NULL;
				ptr3->exp=exp;
				ptr3->cof=cof;
			}
			else
			{
				p=poly3;
				while(p!=NULL && p->exp<exp)
					p=p->link;
				if(p->exp=exp)
				{
					p->cof+=cof;

				}
				else if(p!=NULL)
				{
					p=(struct Poly*)malloc(sizeof(struct Poly));
					p->cof=cof;
					p->exp=exp;
					p->link=poly3;
					poly3=p;
				}
				else
				{
					ptr3->link=(struct Poly*)malloc(sizeof(struct Poly));
					ptr3=ptr3->link;
					ptr3->link=NULL;
					ptr3->exp=exp;
					ptr3->cof=cof;
				}
			}
			Display(poly3);
		}
		ptr=ptr->link;
	}
}
		
			



void Add_poly()
{
	ptr=poly1;
	ptr2=poly2;
	while(ptr!=NULL&&ptr2!=NULL)
	{
		if(poly3==NULL)
		{
			poly3=(struct Poly*)malloc(sizeof(struct Poly));
			ptr3=poly3;
		}
		else
		{
			ptr3->link=(struct Poly*)malloc(sizeof(struct Poly));
			ptr3=ptr3->link;
		}
		ptr3->link=NULL;

		if(ptr->exp == ptr2->exp)
		{
			ptr3->exp=ptr->exp;
			ptr3->cof=ptr->cof+ptr2->cof;
			ptr=ptr->link;
			ptr2=ptr2->link;
		}
		else if(ptr->exp > ptr2->exp)
		{
			ptr3->exp=ptr->exp;
			ptr3->cof=ptr->cof;
			ptr=ptr->link;
		}
		else 
		{
			ptr3->exp=ptr2->exp;
			ptr3->cof=ptr2->cof;
			ptr2=ptr2->link;
		}
	}
	while(ptr!=NULL)
	{
		ptr3->link=(struct Poly*)malloc(sizeof(struct Poly));
		ptr3=ptr3->link;
		ptr3->exp=ptr->exp;
		ptr3->cof=ptr->cof;
		ptr=ptr->link;
	}
	while(ptr2!=NULL)
	{
		ptr3->link=(struct Poly*)malloc(sizeof(struct Poly));
		ptr3=ptr3->link;
		ptr3->exp=ptr2->exp;
		ptr3->cof=ptr2->cof;
		ptr2=ptr2->link;
	}
}
void Display(struct Poly* start)
{
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%dx^%d + ",ptr->cof,ptr->exp);
		ptr=ptr->link;
	}
	printf("0\n");
}
struct Poly* Create()
	
{
	struct Poly *str;
	int i=0,max,val;
	printf("Enter the degree of polynomial ");
	scanf("%d",&max);
	max++;
	str=(struct Poly*)malloc(sizeof(struct Poly));
	ptr=str;
	ptr->link=NULL;
	for(;i<max;++i)
	{
		printf("Enter the coeff of x^%d :",i);
		scanf("%d",&val);
		if(val!=0)
		{
			ptr->exp=i;
			ptr->cof=val;
		}
		if(i+1!=max&&val!=0)
		{
			ptr->link=(struct Poly*)malloc(sizeof(struct Poly));
			ptr=ptr->link;
			ptr->link=NULL;
		}
	}
	return str;
}


		
