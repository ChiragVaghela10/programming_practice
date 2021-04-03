/*********************************************
Name	        : Desai Ravi D.
Roll No.	: 10BCE113
Objective	: To understand stack operations
**********************************************/

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int arr[10];

void main()
{
	int top = -1, temp, c=0, i=0, d=0;

	search:

	clrscr();

	printf("\t\t===*=== Stack Operations ===*===");
	printf("\n\n1. Push");
	printf("\n2. Pop");
	printf("\n3. Peep");
	printf("\n4. Change");
	printf("\n5. Traverse");
	printf("\n6. Exit");
	printf("\n\nPlease select any number : ");
	scanf("%d", &temp);

	switch(temp)
	{
		case 1:
		clrscr();
		printf("\t===*=== Push Operation ===*===");
		printf("\n\nWhich item you want to enter in the stack? ");
		scanf("%d", &temp);
		if(top > 8)
		{
			printf("\n\nStack Overflow...");
			getch();
			goto search;
		}
		else
		{
			top++;
			arr[top] = temp;
			printf("\n\nItem is pushed into stack...");
			getch();
			goto search;
		}

		case 2:
		clrscr();
		printf("\t===*=== Pop Operation ===*===");
		if(top < 0)
		{
			printf("\n\nStack Underflow..");
			getch();
			goto search;
		}
		else
		{
			top--;
			printf("\n\nOne item poped successfully");
			getch();
			goto search;
		}

		case 3:
		clrscr();
		printf("\t===*=== Peep Operation ===*===");
		printf("\n\nEnter the number of the element you want to see.. ");
		scanf("%d", &c);
		temp = top;
		for(i=1; i<c; i++)
		{
			temp--;
		}
		if(top == -1)
		{
			printf("No Elements...");
			getch();
			goto search;
		}
		else if(temp < 0)
		{
			printf("\n\nThere is only %d elements in stack.", top);
			getch();
			goto search;
		}
		else
		{
			printf("\n\nThe element %d is %d", c, arr[temp]);
			getch();
			goto search;
		}

		case 4:
		clrscr();
		printf("\t===*=== Change Operation ===*===");
		printf("\n\nEnter the number of the element you want to change.. ");
		scanf("%d", &c);
		printf("Enter the data you want to enter at that place in stack : ");
		scanf("%d", &d);
		temp = top;
		for(i=1; i<c; i++)
		{
			temp--;
		}
		if(top == -1)
		{
			printf("No Elements...");
			getch();
			goto search;
		}
		else if(temp < 0)
		{
			printf("\n\nThere is only %d elements in stack.");
			getch();
			goto search;
		}
		else
		{
			arr[temp] = d;
			printf("\n\nThe element %d is changed by value %d", c, arr[temp]);
			getch();
			goto search;
		}

		case 5:
		clrscr();
		temp = top;
		printf("\t===*=== Traversing ===*===\n\n");
		printf("\n\n");
		if(top == -1)
		{
			printf("There are no elements in stack");
			getch();
			goto search;
			}
		while(temp>=0)
		{
			printf("%d ",arr[temp]);
			temp--;
		}
		getch();
		goto search;

		default:
		printf("\n\nWrong Input...\nPlease try again...");
		getch();
		goto search;

		case 6:
		printf("\nI have learnt alot by this stack operation program.");
		getch();
	}
}
