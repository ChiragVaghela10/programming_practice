#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
class data
	{char *name;
	unsigned int num;
	public:
	void getdata(void);
	void putdata(void);
	};

void data::getdata(void)
	{cout<<"Enter the name:"; cin>>name;
	cout<<"Enter the telephone number:"; cin>>num;
	}

void data::putdata(void)
	{cout<<setiosflags(ios::left)<<setw(15)<<name;
	cout<<setiosflags(ios::right)<<setw(10)<<setfill('*')<<num<<"\n";
	}

int main()
{clrscr();
ofstream fout;
fout.open("telephone.txt");
if(fout)
{int value;
cout<<"How many Entries you want to enter?:"; cin>>value;
data *ptr=new data[value];
for(int i=0;i<value;i++)
	{ptr[i].getdata();
	fout.write((char *) &ptr[i], sizeof(ptr[i]) );
	}
fout.close();

ifstream fin;
fin.open("telephone.txt");
for(i=0;i<value;i++)
	{fin.read((char *) &ptr[i], sizeof(ptr[i]) );
	ptr[i].putdata();
	}
fin.close();
}
else
	{cout<<"Error!";
	}
getch();
return 0;
}