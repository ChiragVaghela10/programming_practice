#include<stdio.h>
#include<conio.h>
#include<string.h>

void push(char s[], int t, char value);
char pop(char s[], int t);
int f(char a);
int g(char a);
int r(char a);
char nextchar(char s[]);

char nextchar(char s[])
{
	static pos = 0;
	pos++;
	return s[pos-1];
}

int f(char a)
{
	if(a == '+' || a == '-')		return 1;
	else if(a == '*' || a == '/' ||
		a == '%')   			return 3;
	else if(a == '^')			return 6;
	else if(a == '(')			return 9;
	else if(a == ')')			return 0;
	else 					return 7;
}

int g(char a)
{
	if(a == '+' || a == '-')		return 2;
	else if(a == '*' || a == '/' ||
		a == '%')   			return 4;
	else if(a == '^')			return 5;
	else if(a == '(')			return 0;
	else if(a == ')')			return -1;
	else 					return 8;
}

int r(char a)
{
	if(a == '+' || a == '-' || a == '*' ||
	   a == '/' || a == '%' || a == '^')
	{
		return -1;
	}
	else if(a == ')' || a == '(')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void push(char s[], int t, char value)
{
	s[t] = value;
}

char pop(char s[], int t)
{
	return s[t];
}

int main()
{
	char stack[100]={0}, input[100]={0}, output[100]={0}, next, temp;
	int top = -1, top_o = -1, i, rank = 0;

	clrscr();

	printf("===*=== Infix to Postfix Expression ===*===");
	printf("\n\nPlease enter infix expression : ");
	scanf("%s", input);

	top++;
	stack[top] = '(';

	i=0;
	while( input[i] != NULL)
	{
		i++;
	}
	input[i] = ')';
	input[++i] = '\0';

	next = nextchar(input);

	while(next != NULL)
	{
		if(top < 0)
		{
			printf("Invalid Expression...");
			getch();
			return 0;
		}

		while( f(next) < g(stack[top]) )
		{
			temp = pop(stack, top);
			top--;
			top_o++;
			output[top_o] = temp;
			rank = rank + r(temp);
			if(rank < 1)
			{
				printf("Invalid Expression...");
				getch();
				return 0;
			}
		}

		if( f(next) != g(stack[top]) )
		{
			top++;
			push(stack, top, next);
		}
		else
		{
			top--;
			pop(stack, top);
		}

		next = nextchar(input);
	}

	if(top != -1 || rank != 1)
	{
		printf("Invalid Expression...");
		getch();
		return 0;
	}
	else
	{
		printf("%s", output);
		getch();
		return 0;
	}
}
