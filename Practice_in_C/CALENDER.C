/********************* reference date is 1/1/2010 Friday *****************/
#include<conio.h>
#include<math.h>
void main()
{
long int y,m,d,n=0,i,j,a=0,b=0,c=0,x;
clrscr();
printf("enter the value of year:\n");
scanf("%ld",&y);
printf("enter the value of month:\n");
scanf("%ld",&m);
printf("enter the value of day:\n");
scanf("%ld",&d);
/****** I've simply divided the program into 2 parts
1 for upcomming dates
2 for past dates *********/
if(m>=1 && y>=2010)
	{
	for(i=2010;i<y;i++)
		{
		if(i%4==0)
			{
			n++;
			}
		else
			{
			continue;
			}
		}
	a=((y-2010)*365)+n;

	if(m>2 && y%4==0)
	a++;

	for(j=1;j<m;j++)
		{
		if(j!=2)
			{
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
				b=b+31;
				}
			else
				{
				b=b+30;
				}
			}
		else
			{
			b=b+28;
			}
		}
	c=d-1;
	x=a+b+c;
	}

else
	{
	for(i=2010;i>=y;i--)
		{
		if(i%4 == 0)
			{
			n=n+1;
			}
		else
			{
			continue;
			}
		}
	a=((y-2010)*365)-n;

	if(m>2 && y%4==0)
	a=a+1;

	for(j=1;j<m;j++)
		{
		if(j!=2)
			{
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
				b=b+31;
				}
			else
				{
				b=b+30;
				}
			}
		else
			{
			b=b+28;
			}
		}
	c=d-1;
	x=a+b+c;

	}


printf("\n%ld\n",x);
switch(x%7)
{
case 0: printf("friday");
break;
case 1: printf("saturday");
break;
case 2: printf("sunday");
break;
case 3: printf("monday");
break;
case 4: printf("tuesday");
break;
case 5: printf("wednesday");
break;
case 6: printf("thursday");
break;
case -1: printf("thursday");
break;
case -2: printf("wednesday");
break;
case -3: printf("tuesday");
break;
case -4: printf("monday");
break;
case -5: printf("sunday");
break;
case -6: printf("saturday");
}

	getch();
}

