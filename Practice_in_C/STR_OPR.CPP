/*Two String Exercises

These two problems seem to be on every list of programming interview questions:

1) Remove all duplicate characters from a string. Thus, “aaabbb” becomes “ab” and “abcbd” becomes “abcd”.

2) Replace all runs of consecutive spaces with a single space. Thus, “a.b” is unchanged and “a..b” becomes “a.b”, using a dot to make the space visible.*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
char* remove_sp(char *);
char *remove_rep(char *);

void main()
{char *str;
clrscr();
cout<<"Input a string:\n";
gets(str);
str=remove_sp(str);
cout<<str<<"\n\n";
str=remove_rep(str);
cout<<str<<"\n\n";
getch();
}

char* remove_sp(char *str)
{int i=0,j=0;
for(i=0;i<strlen(str);i++)
	{if(str[i+1]==' ' && str[i]==' ')
		{for(j=i+1;j<strlen(str);j++)
			{str[j]=str[j+1];}
		i--;
		}
	}
return str;
}

char* remove_rep(char *str)
{char* str1;
int i=0,j=0,k=0;
for(i=0;i<strlen(str);i++)
	{for(j=i-1;j>=0;j--)
		{if(str[i]==str[j])
			break;
		}
	if(j==0 || j==-1)
		{str1[k]=str[i];
		k++;}
	}
str1[k]='\0';
return str1;
}