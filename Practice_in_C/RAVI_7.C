#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void push(int s[], int *t, char value);
void pop(int s[], int *t, char *a, char *b);
int operation(char a, char op, char b);
int nextint(char s[]);
int f(char a);
int toint(char a);

int toint(char a)
{
	if(a == '0') return 0;
	if(a == '1') return 1;
	if(a == '2') return 2;
	if(a == '3') return 3;
	if(a == '4') return 4;
	if(a == '5') return 5;
	if(a == '6') return 6;
	if(a == '7') return 7;
	if(a == '8') return 8;
	if(a == '9') return 9;
}


int nextint(char s[])
{
	static int full=0;
	full++;
	return s[full - 1];
}

int f(char a)
{
	if(a == '+' || a == '-' || a == '*' ||
	   a == '/' || a == '^')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void push(int s[], int *t, char value)
{
	*t = *t + 1;
	s[*t] = value;
}

void pop(int s[], int *t, char *a, char *b)
{
	*t = *t - 1;
	*a = s[*t];
	*b = s[*t + 1];
	*t = *t - 1;
}

int operation(char x, char y, char z)
{
	if(y == '+')		return (toint(x) + toint(z));
	if(y == '-')		return (toint(x) - toint(z));
	if(y == '*')		return (toint(x) * toint(z));
	if(y == '/')		return (toint(x) / toint(z));
	if(y == '^')  		return (pow( toint(x),toint(z)));
}

int main()
{
	char postfix[100] = {0}, next;
	char a, b, ans;
	char temp;
	int top = -1;
	int stack[100] = {0};

	clrscr();
	printf("===*=== Solving Postfix Expression ===*===");
	printf("\n\nEnter the post fix expression :");
	scanf("%s", postfix);

	next = nextint(postfix);

	while(next != NULL)
	{
		while( f(next) )
		{
			push(stack, &top, next);
			next = nextint(postfix);
		}

		pop(stack, &top, &a, &b);
		ans = operation(a, next, b);
		push(stack, &top, ans);

		next = nextint(postfix);

	}

	if(top != 0)
	{
		printf("Invalid Expression...");
		getch();
		return 0;
	}
	else
	{
		printf("Answer : %d", stack[0]);
		getch();
		return 0;
	}
}