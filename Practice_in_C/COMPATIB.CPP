#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{char name1[20], name2[20];
int count=0, label=0,a,b;
clrscr();
gets(name1);
gets(name2);
a=strlen(name1);
b=strlen(name2);

for(int i=0;i<a;i++)
	{if(name1[i]==' ')
		{for(int j=i;j<a;j++)
			{name1[j]=name1[j+1];}
		}
	}
for(i=0;i<a;i++)
	{if(name2[i]==' ')
		{for(int j=i;j<a;j++)
			{name2[j]=name2[j+1];}
		}
	}

for(i=0;i<a;i++)
	{for(int j=0;j<b;j++)
		{if(name1[i]==name2[j])
			{ name1[i]=0;
			name2[j]=0;
			break;
			}
		}
	}
for(i=0;i<a;i++)
	{if(name1[i]!=0)
		count++;
	}

for(i=0;i<b;i++)
	{if(name2[i]!=0)
		count++;
	}
cout<<count<<"\n";
int arr[10];
for(i=0;i<10;i++)
      {arr[i]=i+1;}
cout<<"\n\n";

int step=0,k=0;
for(i=0;label!=9;i++)
	{k++;
	if(arr[k]!=0 && step<count)
		{step++;
		if(step==count)
			{label++;
			arr[k]=0;
			cout<<"arr["<<k<<"]->"<<arr[k];
			step=0;
			cout<<"\n";
			}
		}
	if(k==9)
		{k=0;
		if(arr[k]!=0 && step<count)
			{step++;
			if(step==count)
				{label++;
				arr[k]=0;
				cout<<"arr["<<k<<"]->"<<arr[k];
				step=0;
				cout<<"\n";
				}
			}
		}
	}
cout<<"\n\n";
for(i=0;i<10;i++)
	{
	cout<<"arr["<<i<<"]->"<<arr[i]<<"\n";
	}

for(i=0;i<10;i++)
	{if(arr[i]!=0)
		cout<<"answer is:"<<arr[i]*10<<"%\n";
	}
getch();
}