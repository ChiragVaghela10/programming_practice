#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
void main()
{int N,arr[20]={0},i;
	double a,b,c;
	//time_t st,end;
	clrscr();
	cout<<"Enter the no. of candles:";
	cin>>N;
	timer t;
	start();
	//a=t.ti_hund;
	//cout<<a;
	for(i=0;i<N;i++)
		{cout<<"Enter the length:";
		cin>>arr[i];
		}
	//time(&end);
	//cout<<"\n"<<b;
	//c=b-a;
	t.stop();
	a=t.time();
	cout<<a;  //showing elapsed time
getch();
}