#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct node
{int data[3];
struct node *link;
}*temp,*pred,*next;

struct node *insord(struct node* ,struct node *);

struct node * insert(struct node *poly)
{struct node *term;
term=(node *)malloc(sizeof(node));
cout<<"Enter the value of Co-efficient:";
cin>>term->data[0];
cout<<"Enter the power of X:";
cin>>term->data[1];
cout<<"Enter the power of Y:";
cin>>term->data[2];
poly=insord(term,poly);
return poly;
}

struct node * insord(struct node *term,struct node *poly)
{temp=poly;
pred=temp;
next=temp->link;
if(poly == NULL)
	{poly=term;
	poly->link=NULL;
	return poly;
	}
else if(term->data[1]>poly->data[1])
	{term->link=poly;
	poly=term;
	return poly;
	}
else
	{while(term->data[1]<temp->data[1] && temp->link!=NULL)
		{pred=temp;
		temp=temp->link;
		}
	if(term->data[1]<temp->data[1] && temp->link==NULL)
		{temp->link=term;
		term->link=NULL;
		}
	else if((term->data[1] == temp->data[1]) && (term->data[2]>temp->data[2]))
		{pred->link=term;
		term->link=temp;
		}
	else if((term->data[1] == temp->data[1]) && (term->data[2]<temp->data[2]))
		{while(term->data[2]<temp->data[2] && temp->link!=NULL)
			{pred=temp;
			temp=temp->link;
			}
		if( (term->data[1]==temp->data[1] && term->data[2]>temp->data[2]) || (term->data[1]>temp->data[1]))
			{pred->link=term;
			term->link=temp;
			}
		else if(term->data[1] == temp->data[1] && term->data[2] == temp->data[2])
			{temp->data[0]=temp->data[0]+term->data[0];
			}
		else if(temp->link!=NULL)
			{term->link=next;
			temp->link=term;
			}
		else
			{temp->link=term;
			term->link=NULL;
			}
		}
	else if(temp->data[1]==term->data[1] && temp->data[2]==term->data[2])
		{temp->data[0]=temp->data[0]+term->data[0];
		}
	}
return poly;
}

void traverse(struct node *eqn)
{cout<<"\n\n";
while(eqn!=NULL)
	{if(eqn->data[0]>0)
	cout<<"+";
	else
	cout<<"-";
	cout<<eqn->data[0]<<"X^"<<eqn->data[1]<<"Y^"<<eqn->data[2]<<" ";
	eqn=eqn->link;
	}
}

struct node * addpoly(struct node *poly1, struct node *poly2)
{struct node *temp1,*pred1;
temp1=poly2;
pred1=temp1;
while(temp1!=NULL)
	{pred1=temp1;
	temp1=temp1->link;
	pred1->link=NULL;
	poly1=insord(pred1,poly1);
	}
return poly1;
}

void main()
{struct node *poly1=NULL,*poly2=NULL;
int choice;
clrscr();
do
{cout<<"\nEnter your Choice:\n";
cout<<"[1]Enter in polynomial 1:\n";
cout<<"[2]Enter in polynomial 2:\n";
cout<<"[3]Stop inserting values!\n";
cin>>choice;
if(choice==1)
	{char ch;
	   do
		{cout<<"Enter the term:\n";
		poly1=insert(poly1);
		cout<<"Do you want to enter more term?(Press n to stop)";
		cin>>ch;
		}
	while(ch!='n');
	}
else if(choice==2)
	{char ch;
	    do
		{cout<<"Enter the term:\n";
		poly2=insert(poly2);
		cout<<"Do you want to enter more term?(Press n to stop)";
		cin>>ch;
		}
	while(ch!='n');
	}
}
while(choice!=3);
traverse(poly1);
traverse(poly2);
struct node *result;
result=addpoly(poly1,poly2);
cout<<"\n\nResulting Polynomial:";
traverse(result);
getch();
}