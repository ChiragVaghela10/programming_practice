#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
int main()
{char str[31][100]={'\0'};
int t;
ofstream output;
cin>>t;
for(int i=0;i<t;i++)
	{gets(str[i]);
	}
	cout<<endl<<endl;
for(i=0;i<t;i++)
	{for(int j=0;str[i][j]!='\0';j++)
		{switch(str[i][j])
			{case 'a':str[i][j]='y'; break;
			 case 'b':str[i][j]='h'; break;
			 case 'c':str[i][j]='e'; break;
			 case 'd':str[i][j]='s'; break;
			 case 'e':str[i][j]='o'; break;
			 case 'f':str[i][j]='c'; break;
			 case 'g':str[i][j]='v'; break;
			 case 'h':str[i][j]='x'; break;
			 case 'i':str[i][j]='d'; break;
			 case 'j':str[i][j]='u'; break;
			 case 'k':str[i][j]='i'; break;
			 case 'l':str[i][j]='g'; break;
			 case 'm':str[i][j]='l'; break;
			 case 'n':str[i][j]='b'; break;
			 case 'o':str[i][j]='k'; break;
			 case 'p':str[i][j]='r'; break;
			 case 'q':str[i][j]='z'; break;
			 case 'r':str[i][j]='t'; break;
			 case 's':str[i][j]='n'; break;
			 case 't':str[i][j]='w'; break;
			 case 'u':str[i][j]='j'; break;
			 case 'v':str[i][j]='p'; break;
			 case 'w':str[i][j]='f'; break;
			 case 'x':str[i][j]='m'; break;
			 case 'y':str[i][j]='a'; break;
			 case 'z':str[i][j]='q'; break;
			}
		}
	}
output.open("data.txt",ios::out);
for(i=0;i<t;i++)
	{cout<<"case #"<<i+1<<":"<<str[i]<<endl;
	output<<"case #"<<i+1<<": "<<str[i]<<endl;
	}
output.close();
getch();
return 0;
}