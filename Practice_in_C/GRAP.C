#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{int i,j,k,l,m,N=5,set[]={1,2,3,4,6},sub[5]={0};

for(i=0;i<N;i++)
	{for(j=i,k=0;j<N;j++,k++)
		{sub[k]=set[j];
		if(j==N-1 && N>1)
			{
			N--;
			for(l=0;sub[l]!=0;l++)
			printf("%d",sub[l]);

			printf("\n\n");}

			for(m=0;m<N;m++)
			sub[m]=0;

			}
		}
	}
getch();
}