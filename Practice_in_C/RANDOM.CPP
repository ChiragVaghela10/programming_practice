#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
int m,i=1;
void gcd(int ,int);

main()
{
	int a,b,hr,min,sec,low,high,diff,*rand;
	long seed;
	struct time t;
	clrscr();
	cout<<"Enter the limits:";
	cin>>low>>high;
	diff=high-low;

	gettime(&t);          //counting seed
	hr=t.ti_hour;
	min=t.ti_min;
	sec=t.ti_sec;
	cout<<hr<<": "<<min<<": "<<sec<<"\n\n";
	seed=(hr*min*sec);
	cout<<seed<<"\n";

/*	cin>>a>>b;
	gcd(a,b);
	cout<<m<<"\n";
	if( ((seed*seed)%(a*b)!=1) && ((seed*seed)!=(a*b)) )
		{for(i=0;i<diff;i++)
			{
			*(rand+i)=low+((seed*seed)%(a*b));
			cout<<*(rand+i);
			printf("%d",*(rand+i));
			}
		}
*/
getch();
}
void gcd(int a,int b)
{
	int n;
	if(a==b) {m=a; return;}
	if(a%i==0 && b%i==0)
	{
		(a>b)?(n=b):(n=a);
		if(i<=n)
		{
			m=i;
		}
		else
		{
			return;
		}
	}
	i++;
	(a>b)?(n=b):(n=a);
	if(i<=n)
		gcd(a,b);
}
